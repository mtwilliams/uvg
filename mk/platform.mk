#===-- mk/platform.mk ------------------------------------------------------===#
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

## \file mk/platform.mk
## \brief Opaquely handles platform specific prefixes, suffixes, and extensions
## as well as system libraries.
##

ifndef _UVG_BUILD_PLATFORM_MK_
_UVG_BUILD_PLATFORM_MK_ := 1

include mk/toolchain.mk

-include mk/config
ifndef _UVG_BUILD_CONFIG_
  $(error Please ./configure first.)
endif

include mk/$(TARGET_PLATFORM).mk

endif # _UVG_BUILD_PLATFORM_MK_
