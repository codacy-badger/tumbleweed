#Tumbleweeed
#Copyright © 2019 Johann MARTINET
#
#Permission is hereby granted, free of charge, to any person obtaining
#a copy of this software and associated documentation files (the "Software"),
#to deal in the Software without restriction, including without limitation
#the rights to use, copy, modify, merge, publish, distribute, sublicense,
#and/or sell copies of the Software, and to permit persons to whom the
#Software is furnished to do so, subject to the following conditions:
#
#The above copyright notice and this permission notice shall be included
#in all copies or substantial portions of the Software.
#
#THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
#EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
#OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
#IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
#DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
#TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
#OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

################################################################################
#################################### General ###################################
################################################################################
# remove default rules
.SUFFIXES:
# paths
PATH_BUILD = build
PATH_INC = include
PATH_SRC = src
PATH_TEST = test
# phony
.PHONY: all test clean
# rules
all: softtest

test: test-softtest

clean: 
	$(RM) -r $(PATH_BUILD)

################################################################################
############################# Utilities ########################################
################################################################################
CD = cd
PWD = pwd
RM = rm -f
MKDIR = mkdir -p

################################################################################
##################################### C ########################################
################################################################################
# C compiler
CC ?= gcc
# compilation flags
CFLAGS = -std=c11
CFLAGS += -pedantic
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

################################################################################
##################################### Softtest #################################
################################################################################
# compilation flags
SOFTTEST_FLAGS = $(CFLAGS)
SOFTTEST_FLAGS += -O2
SOFTTEST_FLAGS_TEST = $(CFLAGS)
SOFTTEST_FLAGS_TEST += -O0
SOFTTEST_FLAGS_TEST += -g
SOFTTEST_FLAGS_TEST += -I$(PATH_INC)
SOFTTEST_FLAGS_TEST += -I$(SOFTTEST_PATH)
# paths
SOFTTEST_PATH = $(PATH_SRC)/softtest
SOFTTEST_BUILD = $(PATH_BUILD)/softtest
SOFTTEST_PATH_TEST = $(PATH_TEST)/softtest
#files
SOFTTEST_SRC = $(wildcard $(SOFTTEST_PATH)/*.c)
SOFTTEST_OBJ = $(SOFTTEST_SRC:$(SOFTTEST_PATH)/%.c=$(SOFTTEST_BUILD)/%.o)
SOFTTEST_TEST = $(wildcard $(SOFTTEST_PATH_TEST)/*.c)
# phony
.PHONY: softtest test-softtest clean-softtest
# rules
softtest: $(SOFTTEST_OBJ)

$(SOFTTEST_BUILD)/%.o: $(SOFTTEST_PATH)/%.c
	$(MKDIR) $(@D)
	$(CC) $(SOFTTEST_FLAGS) -c $< -o $@

test-softtest: $(SOFTTEST_TEST)
	$(MKDIR) $(SOFTTEST_BUILD)
	$(CC) $(SOFTTEST_FLAGS_TEST) $(SOFTTEST_SRC) $(SOFTTEST_TEST) -o $(SOFTTEST_BUILD)/test

clean-softtest: 
	$(RM) -r $(SOFTTEST_BUILD)
