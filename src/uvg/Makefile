#===-- src/uvg/Makefile ----------------------------------------------------===#
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

## \file src/uvg/Makefile
## \brief ...
##

UVG_PARANOID := $(PARANOID)
UVG_CONFIGURATION := $(CONFIGURATION)
UVG_LINKAGE := $(LINKAGE)

UVG_CFLAGS  :=
UVG_LDFLAGS := $(call ld-libraries,bin) $(call ld-libraries,lib)
UVG_ARFLAGS :=

ifneq ($(UVG_PARANOID),yes)
  UVG_CFLAGS += $(call cc-define,UVG_DISABLE_PARANOID_ASSERTIONS)
endif
ifeq ($(UVG_CONFIGURATION),debug)
  UVG_CFLAGS += $(call cc-debug)
  UVG_LDFLAGS += $(call ld-debug)
  UVG_ARFLAGS += $(call ar-debug)
endif
ifeq ($(UVG_CONFIGURATION),development)
  UVG_CFLAGS += $(call cc-development)
  UVG_LDFLAGS += $(call ld-development)
  UVG_ARFLAGS += $(call ar-development)
endif
ifeq ($(UVG_CONFIGURATION),release)
  UVG_CFLAGS += $(call cc-define,UVG_DISABLE_DEBUG_ASSERTIONS)
  UVG_CFLAGS += $(call cc-define,UVG_DISABLE_DEVELOPMENT_ASSERTIONS)
  UVG_CFLAGS += $(call cc-release)
  UVG_LDFLAGS += $(call ld-release)
  UVG_ARFLAGS += $(call ar-release)
endif

#===------------------------------------------------------------------------===#
# Rules
#

ifeq ($(UVG_LINKAGE),static)
  UVG_CFLAGS += $(call cc-define,UVG_LINKAGE=UVG_STATIC_LINKAGE)
  UVG := lib/$(STATIC_LIB_PREFIX)uvg$(STATIC_LIB_SUFFIX)$(STATIC_LIB_EXTENSION)
endif
ifeq ($(UVG_LINKAGE),dynamic)
  UVG_CFLAGS += $(call cc-define,UVG_LINKAGE=UVG_DYNAMIC_LINKAGE)
  UVG := bin/$(SHARED_LIB_PREFIX)uvg$(SHARED_LIB_SUFFIX)$(SHARED_LIB_EXTENSION)
endif

ifeq ($(TOOLCHAIN),msvc)
  UVG_IMPORT_LIB := $(STATIC_LIB_PREFIX)uvg$(STATIC_LIB_SUFFIX)
else
  UVG_IMPORT_LIB := $(SHARED_LIB_PREFIX)uvg$(SHARED_LIB_SUFFIX)
endif

UVG_INCLUDES := $(call cc-includes,include)
UVG_DEPENDENCIES :=

UVG_SOURCES := $(shell find src/uvg -name '*.c')
UVG_OBJECTS := $(addprefix obj/, $(subst src/,,$(UVG_SOURCES:%.c=%.o)))

-include $(UVG_OBJECTS:%.o=%.d)
obj/uvg/%.o: src/uvg/%.c
	@echo "[CC] $<"
	@mkdir -p ${@D}
	$(call c++) $(UVG_INCLUDES) $(UVG_CFLAGS) $(call cc-input,$<) $(call cc-output,$@)
	$(call c++) $(UVG_INCLUDES) $(UVG_CFLAGS) $(call cc-input,$<) -MM -MT $@ >$(patsubst %.o,%.d,$@)

$(UVG): $(UVG_OBJECTS)
	@echo "[LD] $@"
	@mkdir -p ${@D}
ifeq ($(UVG_LINKAGE),static)
	$(call ar++) $(UVG_ARFLAGS) $(call ar-output,$@) $(foreach input,$(UVG_OBJECTS),$(call ar-input,$(input)))
endif
ifeq ($(UVG_LINKAGE),dynamic)
	$(call ld++) $(call ld-shared) $(UVG_LDFLAGS) $(call ld-output,$@) $(foreach input,$(UVG_OBJECTS),$(call ld-input,$(input))) $(UVG_DEPENDENCIES)
endif
