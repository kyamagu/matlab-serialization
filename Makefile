MATLABDIR   ?= /usr/local/matlab
MEX         ?= $(MATLABDIR)/bin/mex
MEXEXT      ?= $(shell $(MATLABDIR)/bin/mexext)
RM          ?= rm
SOURCES     := serialize.c deserialize.c
TARGETS     := $(SOURCES:.c=.$(MEXEXT))

all: $(TARGETS)

%.$(MEXEXT): %.c
	$(MEX) $<

clean:
	$(RM) -rf *.$(MEXEXT)
