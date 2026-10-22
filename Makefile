CC := gcc
CFLAGS := -Wall -Wextra -std=c11
LDLIBS := -lm
BUILD_DIR := /tmp/pp1

rwildcard = $(wildcard $(1)$(2)) $(foreach dir,$(wildcard $(1)*/),$(call rwildcard,$(dir),$(2)))
C_SOURCES := $(call rwildcard,,*.c)
PROGRAMS := $(foreach source,$(C_SOURCES),$(subst _,-,$(subst /,-,$(patsubst %.c,%,$(source)))))

.PHONY: all $(PROGRAMS)

all: $(addprefix $(BUILD_DIR)/,$(PROGRAMS))

define PROGRAM_template
.PHONY: $(1)
$(1): $(BUILD_DIR)/$(1)
	$(BUILD_DIR)/$(1)

$(BUILD_DIR)/$(1): $(2)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $$@ $$< $(LDLIBS)
endef

$(foreach source,$(C_SOURCES),$(eval $(call PROGRAM_template,$(subst _,-,$(subst /,-,$(patsubst %.c,%,$(source)))),$(source))))
