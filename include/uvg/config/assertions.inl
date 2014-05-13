//===-- uvg/config/assertions.inl -----------------------------------------===//
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
/// \brief Documents and defines the pre-processor defines that control the
/// inclusion of tiered assertions.
///
//===----------------------------------------------------------------------===//

/// \def UVG_DISABLE_PARANOID_ASSERTIONS
/// \brief If defined uvg won't include paranoid assertions.
///
#ifdef DOXYGEN
  #define UVG_DISABLE_PARANOID_ASSERTIONS
#endif // DOXYGEN

/// \def UVG_DISABLE_DEBUG_ASSERTIONS
/// \brief If defined uvg won't include debug assertions.
///
#ifdef DOXYGEN
  #define UVG_DISABLE_DEBUG_ASSERTIONS
#endif // DOXYGEN

/// \def UVG_DISABLE_DEVELOPMENT_ASSERTIONS
/// \brief If defined uvg won't include development assertions.
///
#ifdef DOXYGEN
  #define UVG_DISABLE_DEVELOPMENT_ASSERTIONS
#endif // DOXYGEN

/// \def UVG_DISABLE_RELEASE_ASSERTIONS
/// \brief If defined uvg won't include release assertions.
///
#ifdef DOXYGEN
  #define UVG_DISABLE_RELEASE_ASSERTIONS
#endif // DOXYGEN
