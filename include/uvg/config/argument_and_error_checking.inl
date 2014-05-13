//===-- uvg/config/argument_and_error_checking.inl ------------------------===//
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
/// argument and error checking.
///
//===----------------------------------------------------------------------===//

/// \def UVG_DISABLE_ARGUMENT_CHECKS
/// \brief If defined, uvg won't check supplied arguments.
///
#ifdef DOXYGEN
  #define UVG_DISABLE_ARGUMENT_CHECKS
#endif // DOXYGEN

/// \def UVG_DISABLE_ERROR_CHECKS
/// \brief If defined uvg won't check for errors.
///
#ifdef DOXYGEN
  #define UVG_DISABLE_ERROR_CHECKS
#endif // DOXYGEN
