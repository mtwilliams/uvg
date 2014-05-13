#===-- Makefile ------------------------------------------------------------===#
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

-include conf.mk
ifndef _UVG_BUILD_CONFIG_
  $(error Please ./configure first.)
endif

include mk/detect/platform.mk
include mk/detect/architecture.mk
include mk/toolchain.mk
include mk/platform.mk
include mk/architecture.mk

.PHONY: all docs clean uvg

all: uvg

include src/Makefile

uvg: $(UVG)

docs:
	@echo "[DOXYGEN] Doxyfile"
	@doxygen Doxyfile

clean:
	@echo "Cleaning..."
	@rm -R -f bin
	@rm -R -f lib
	@rm -R -f obj
	@rm -R -f documentation/html
