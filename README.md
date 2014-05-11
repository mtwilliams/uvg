# μvg

[![Build Status](https://travis-ci.org/polyswf/uvg.png?branch=master)](http://travis-ci.org/polyswf/uvg)

An embeddable hardware accelerated vector graphics library.

## Supports

| Platform  | Toolchain               | Supported             |
|:---------:|:-----------------------:|:---------------------:|
| Windows   | Microsoft Visual Studio | <span>&#10003;</span> |
| Windows   | MinGW/MSYS              | <span>&#10003;</span> |
| Windows   | Cygwin                  |         Never         |
| Mac OS X  | GCC or Clang            |        Planned        |
| Linux     | GCC or Clang            |        Planned        |
| BSD       | GCC or Clang            |        Planned        |
| Android   | GCC or Clang            |        Planned        |
| iOS       | GCC or Clang            |        Planned        |
| Web       | Native Client (PNaCl)   |        Planned        |
| Web       | emscripten              |        Planned        |

| Platform  | Backend                 | Supported             |
|:---------:|:-----------------------:|:---------------------:|
| Windows   | `AGL_BACKEND_D3D9`      |        Planned        |
| Windows   | `AGL_BACKEND_D3D11`     |        Planned        |
| Windows   | `AGL_BACKEND_GL21`      |        Planned        |
| Windows   | `AGL_BACKEND_GL31`      |        Planned        |
| Windows   | `AGL_BACKEND_MANTLE`    |        Planned        |
|           |                         |                       |
| Mac OS X  | `AGL_BACKEND_GL21`      |        Planned        |
| Mac OS X  | `AGL_BACKEND_GL31`      |        Planned        |
| Mac OS X  | `AGL_BACKEND_MANTLE`    |       Hopefully       |
|           |                         |                       |
| Linux     | `AGL_BACKEND_GL21`      |        Planned        |
| Linux     | `AGL_BACKEND_GL31`      |        Planned        |
| Linux     | `AGL_BACKEND_MANTLE`    |       Hopefully       |
|           |                         |                       |
| Android   | `AGL_BACKEND_GLES`      |         Never         |
| Android   | `AGL_BACKEND_GLES2`     |        Planned        |
| Android   | `AGL_BACKEND_GLES3`     |        Planned        |
|           |                         |                       |
| iOS       | `AGL_BACKEND_GLES`      |         Never         |
| iOS       | `AGL_BACKEND_GLES2`     |        Planned        |
| iOS       | `AGL_BACKEND_GLES3`     |        Planned        |
|           |                         |                       |
| NaCl      | `AGL_BACKEND_GLES2`     |        Planned        |
| NaCl      | `AGL_BACKEND_GLES3`     |        Planned        |

## Building

TODO

## Configuring

Compile-time, link-time, and runtime behaviour is controlled by `./configure`
switches and options, as well as various pre-processor defines (which are
documented in `include/uvg/config.h`).

### via switches and options

TODO

## License

Public domain.

### in legalese

Author(s):

  * Michael Williams <mwilliams@polyswf.org>

This is free and unencumbered software released into the public domain. Anyone
is free to copy, modify, publish, use, compile, sell, or distribute this
software, either in source code form or as a compiled binary, for any purpose,
commercial or non-commercial, and by any means.

In jurisdictions that recognize copyright laws, the author or authors of this
software dedicate any and all copyright interest in the software to the public
domain. We make this dedication for the benefit of the public large and to the
detriment of our heirs and successors. We intend this dedication to be an
overt act of relinquishment in perpetuity of all present and future rights to
this software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
