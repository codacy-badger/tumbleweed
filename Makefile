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
.PHONY: all test run cov clean
# rules
all: softtest

test: test-softtest

run: run-softtest

cov: run-cov-softtest
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
CC = gcc
# compilation flags
CFLAGS = -std=c11
CFLAGS += -pedantic
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
CFLAGS += -I$(PATH_INC)


################################################################################
##################################### Coverage #################################
################################################################################
# Coverage tool
COV = gcov
# coverage compilation flags
COVFLAGS = --coverage 
################################################################################
##################################### Softtest #################################
################################################################################
# compilation flags
SOFTTEST_FLAGS = $(CFLAGS)
SOFTTEST_FLAGS += -O2
SOFTTEST_FLAGS_TEST = $(CFLAGS)
SOFTTEST_FLAGS_TEST += -O0
SOFTTEST_FLAGS_TEST += -g
SOFTTEST_FLAGS_TEST += -I$(SOFTTEST_PATH)
SOFTTEST_FLAGS_COV = $(SOFTTEST_FLAGS_TEST)
SOFTTEST_FLAGS_COV += -fprofile-arcs
SOFTTEST_FLAGS_COV += -ftest-coverage
# paths
SOFTTEST_PATH = $(PATH_SRC)/softtest
SOFTTEST_PATH_TEST = $(PATH_TEST)/softtest
SOFTTEST_BUILD = $(PATH_BUILD)/softtest
SOFTTEST_BUILD_OBJ = $(SOFTTEST_BUILD)/objects
SOFTTEST_BUILD_OBJ_SRC = $(SOFTTEST_BUILD_OBJ)/src
SOFTTEST_BUILD_OBJ_TEST = $(SOFTTEST_BUILD_OBJ)/test
SOFTTEST_BUILD_EXEC = $(SOFTTEST_BUILD)/exec
#files
SOFTTEST_SRC = $(wildcard $(SOFTTEST_PATH)/*.c)
SOFTTEST_OBJ = $(SOFTTEST_SRC:$(SOFTTEST_PATH)/%.c=$(SOFTTEST_BUILD_OBJ_SRC)/%.o)
SOFTTEST_TEST = $(wildcard $(SOFTTEST_PATH_TEST)/*.c)
SOFTTEST_TEST_OBJ = $(SOFTTEST_TEST:$(SOFTTEST_PATH_TEST)/%.c=$(SOFTTEST_BUILD_OBJ_TEST)/%.o)
# phony
.PHONY: softtest test-softtest run-softtest cov-softtest clean-softtest
# rules
softtest: FLAGS = $(SOFTTEST_FLAGS)
softtest: $(SOFTTEST_OBJ)

test-softtest: FLAGS = $(SOFTTEST_FLAGS_TEST)
test-softtest: FLAGS_TEST = $(SOFTTEST_FLAGS_TEST)
test-softtest: $(SOFTTEST_OBJ) $(SOFTTEST_TEST_OBJ)
	$(MKDIR) $(SOFTTEST_BUILD_EXEC)
	$(CC) $(CFLAGS) -I$(SOFTTEST_PATH)  $(SOFTTEST_OBJ) $(SOFTTEST_TEST_OBJ) -o $(SOFTTEST_BUILD_EXEC)/test

cov-softtest: FLAGS = $(SOFTTEST_FLAGS_COV)
cov-softtest: FLAGS_TEST = $(SOFTTEST_FLAGS_TEST)
cov-softtest: $(SOFTTEST_OBJ) $(SOFTTEST_TEST_OBJ)
	$(MKDIR) $(SOFTTEST_BUILD_EXEC)
	$(CC) $(CFLAGS) $(COVFLAGS) -I$(SOFTTEST_PATH) $(SOFTTEST_OBJ) $(SOFTTEST_TEST_OBJ) -o $(SOFTTEST_BUILD_EXEC)/cov

$(SOFTTEST_BUILD_OBJ_SRC)/%.o: $(SOFTTEST_PATH)/%.c
	$(MKDIR) $(@D)
	$(CC) $(FLAGS) -c $< -o $@

$(SOFTTEST_BUILD_OBJ_TEST)/%.o: $(SOFTTEST_PATH_TEST)/%.c
	$(MKDIR) $(@D)
	$(CC) $(FLAGS_TEST) -c $< -o $@

run-softtest: test-softtest
	$(SOFTTEST_BUILD_EXEC)/test

run-cov-softtest: cov-softtest
	$(SOFTTEST_BUILD_EXEC)/cov
	$(COV) $(SOFTTEST_OBJ)

clean-softtest: 
	$(RM) -r $(SOFTTEST_BUILD)
