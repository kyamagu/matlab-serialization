# Makefile for mex files.
# 
# Example:
#
#    make MATLABDIR=/Applications/MATLAB_R2013a.app
#
MATLABDIR   ?= /usr/local/matlab
MEX         ?= $(MATLABDIR)/bin/mex
MEXEXT      ?= $(shell $(MATLABDIR)/bin/mexext)
RM          ?= rm
SOURCES     := $(wildcard *.c)
TARGETS     := $(SOURCES:.c=.$(MEXEXT))

all: $(TARGETS)

%.$(MEXEXT): %.c
	$(MEX) $<

clean:
	$(RM) -rf *.$(MEXEXT)
