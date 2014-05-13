//===-- uvg/config/compiler_platform_and_architecture_autodetection.inl ---===//
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
/// compiler, platform, and architecture auto-detection.
///
//===----------------------------------------------------------------------===//

/// \def UVG_DISABLE_COMPILER_AUTODETECTION
/// \brief If defined, uvg won't attempt to detect the current compiler based
/// on pre-processor defines; it is instead expected to be user defined.
///
#ifdef DOXYGEN
  #define UVG_DISABLE_COMPILER_AUTODETECTION
#endif // DOXYGEN

/// \def UVG_DISABLE_PLATFORM_AUTODETECTION
/// \brief If defined, uvg won't attempt to detect the target platform based on
/// pre-processor defines; it is instead expected to be user defined.
///
#ifdef DOXYGEN
  #define UVG_DISABLE_PLATFORM_AUTODETECTION
#endif // DOXYGEN

/// \def UVG_DISABLE_ARCHITECTURE_AUTODETECTION
/// \brief If defined, uvg won't attempt to detect the target architecture
/// based on pre-processor defines; it is instead expected to be user defined.
///
#ifdef DOXYGEN
  #define UVG_DISABLE_ARCHITECTURE_AUTODETECTION
#endif // DOXYGEN
