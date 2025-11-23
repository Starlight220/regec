BIN_NAME := regec

INCLUDE_DIR := include

SRC_DIR := src
SRCS := $(wildcard $(SRC_DIR)/*.c)

BUILD_DIR := build
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

CFLAGS := -I$(INCLUDE_DIR) -Wall -g -pedantic -MMD -MP

LDFLAGS := -Llib
LDLIBS := -lm

.PHONY: all
all: $(BUILD_DIR)/$(BIN_NAME)

$(BUILD_DIR)/$(BIN_NAME): $(OBJS) | $(BUILD_DIR)
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $@

.PHONY: clean
clean:
	@$(RM) -rv $(BIN_DIR) $(OBJ_DIR)

-include $(OBJS:.o=.d)
