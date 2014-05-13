//===-- uvg/config.h ------------------------------------------------------===//
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
/// compile-time, link-time, and runtime behaviour of uvg.
///
//===----------------------------------------------------------------------===//

#ifndef _UVG_CONFIG_H_
#define _UVG_CONFIG_H_

//===----------------------------------------------------------------------===//

//
// Argument and error checking:
//

#include "uvg/config/argument_and_error_checking.inl"

//
// Assertions:
//

#include "uvg/config/assertions.inl"

//
// Compiler, platform, and architecture auto-detection:
//

#include "uvg/config/compiler_platform_and_architecture_autodetection.inl"

//
// Linkage:
//

#include "uvg/config/linkage.inl"

//===----------------------------------------------------------------------===//

#endif // _UVG_CONFIG_H_

//===----------------------------------------------------------------------===//
