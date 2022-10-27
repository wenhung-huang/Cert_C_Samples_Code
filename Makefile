ALL_SRCS=$(shell find -name *.c)

EXCLUDE_SRC= rules/arr/30/c0.c rules/arr/30/c0.c

BUILD_DIR=build
CC=gcc
SRCS=$(filter-out $(EXCLUDE_SRC),$(ALL_SRCS))
TARGET = MISRA
OBJS=$(SRCS:%.c=$(BUILD_DIR)/%.o)

all: $(BUILD_DIR)/$(TARGET).out
	

$(BUILD_DIR)/%.out: $(OBJS) 
	
	

$(BUILD_DIR)/%.o: %.c 
	mkdir -p $(@D)
	@$(CC) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)