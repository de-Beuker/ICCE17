#!/usr/bin/make

# Your compiler
CXX := g++-8.1

CXXFLAGS += -Wall -std=c++17

# Finds on Mac, too
LIBSRCS = $(filter-out ./main.cc,$(shell find . -name \*.cc))
LIBOBJS = $(patsubst %.cc,%.o,$(LIBSRCS))

# Needed to link main against convenience library
LDFLAGS += -L. -lproject

main: main.o libproject.a
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(LDFLAGS) -o $@ $<

$(LIBOBJS): %.o: %.cc
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<

libproject.a: $(LIBOBJS)
	ar rcs $@ $^

clean:
	rm -f libproject.a $(LIBOBJS)

.PHONY: clean