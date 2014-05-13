#===-- mk/toolchain.mk -----------------------------------------------------===#
#
#  uvg is an embeddable hardware accelerated vector graphics library.
#
#  This file is distributed under the terms described in LICENSE.
#
#  Author(s):
#
#    * Michael Williams <mwilliams@polyswf.org>
#
#===------------------------------------------------------------------------===#

## \file mk/toolchain.mk
## \brief Abstracts toolchain usage to provide a standard and opaque interface
## for compiling and linking C, C++, and Assembly code. Ideally it reconciles
## all differences, but unfortunately it can't. So be aware.
##

ifndef _UVG_BUILD_TOOLCHAIN_MK_
_UVG_BUILD_TOOLCHAIN_MK_ := 1

-include mk/config
ifndef _UVG_BUILD_CONFIG_
  $(error Please ./configure first.)
endif

include mk/$(TOOLCHAIN).mk

endif # _UVG_BUILD_TOOLCHAIN_MK_
