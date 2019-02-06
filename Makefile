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
# phony
.PHONY: all
# rules
all: softtest

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
#files
SOFTTEST_SRC = softtest.c
SOFTTEST_OBJ = softtest.o
# phony
.PHONY: softtest
# rules
softtest: $(SOFTTEST_OBJ)

softtest.o: softtest.h softtest_internals.h softtest.c
	$(CC) $(SOFTTEST_FLAGS) -c softtest.c
