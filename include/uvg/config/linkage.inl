//===-- uvg/config/linkage.inl --------------------------------------------===//
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
/// \brief Documents and defines the pre-processor defines that control
/// symbol visibility.
///
//===----------------------------------------------------------------------===//

/// \def UVG_LINKAGE
/// \brief Define to UVG_INTERNAL_LINKAGE, UVG_STATIC_LINKAGE, or
/// UVG_DYNAMIC_LINKAGE based on how you are linking to uvg.
///
#ifdef DOXYGEN
  #define UVG_LINKAGE
#endif // DOXYGEN
