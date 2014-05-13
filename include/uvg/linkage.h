//===-- uvg/linkage.h -----------------------------------------------------===//
//
//  uvg is an embeddable hardware accelerated vector graphics library.
//
//  This file is distributed under the terms described in LICENSE.
//
//  Author(s):
//
//    * Michael Williams <mwilliams@polyswf.org>
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief Defines the pre-processor macros that assist with symbol visibility.
///
//===----------------------------------------------------------------------===//

#ifndef _UVG_LINKAGE_H_
#define _UVG_LINKAGE_H_

//===----------------------------------------------------------------------===//

#include "uvg/config.h"

//===----------------------------------------------------------------------===//

/// \def UVG_INTERNAL_LINKAGE
/// \brief Exports symbols for inclusion of upb via objects.
///
#ifdef DOXYGEN
  #define UVG_INTERNAL_LINKAGE 0
#endif // DOXYGEN

/// \def UVG_STATIC_LINKAGE
/// \brief Exports symbols for inclusion of upb via static library.
///
#ifdef DOXYGEN
  #define UVG_STATIC_LINKAGE 1
#endif // DOXYGEN

/// \def UVG_DYNAMIC_LINKAGE
/// \brief Exports symbols for inclusion of upb via dynamic library.
///
#ifdef DOXYGEN
  #define UVG_DYNAMIC_LINKAGE 2
#endif // DOXYGEN

//===----------------------------------------------------------------------===//

/// \def UVG_EXPORT
/// \brief Marks a symbol for export.
///
#ifdef DOXYGEN
  #define UVG_EXPORT
#else // DOXYGEN
  #ifdef _MSC_VER
    #ifdef UVG_LINKAGE
      #if UVG_LINKAGE == UVG_INTERNAL_LINKAGE
        #define UVG_EXPORT
      #elif UVG_LINKAGE == UVG_STATIC_LINKAGE
        #define UVG_EXPORT
      #elif UVG_DYNAMIC_LINKAGE == UVG_DYNAMIC_LINKAGE
        #ifdef UVG_COMPILING
          #define UVG_EXPORT __declspec(dllexport)
        #else // UVG_COMPILING
          #define UVG_EXPORT __declspec(dllimport)
        #endif // UVG_COMPILING
      #endif // UVG_LINKAGE
    #else // UVG_LINKAGE
      #error ("You need to specify UVG_LINKAGE when building and using uvg!")
    #endif // UVG_LINKAGE
  #else // _MSC_VER
    #define UVG_EXPORT
  #endif // _MSC_VER
#endif // DOXYGEN

//===----------------------------------------------------------------------===//

#endif // _UVG_LINKAGE_H_

//===----------------------------------------------------------------------===//
