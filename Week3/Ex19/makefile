
# 'make'        build executable file 'ex19'
# 'make clean'  removes all .o and executable files
#
CXX = g++-7.1
CXXFLAGS = -Wall -Werror -std=c++17
SRCS = main.cc bit_shift.cc log_div.cc bin_search.cc
#bin_search.cc
OBJS = $(SRCS:.cc=.o)
MAIN = ex19

all: $(MAIN)
	@echo  Simple compiler named ex19 has been compiled

%.o: %.cc 
	$(CXX) $(CXXFLAGS) -c $<  -o $@


$(MAIN): $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $(MAIN) $(OBJS)

clean:
	$(RM) *.o *~ $(MAIN)
