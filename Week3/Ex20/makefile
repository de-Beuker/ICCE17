
# 'make'        build executable file 'ex20'
# 'make clean'  removes all .o and executable files
#
CXX = g++-7.1
CXXFLAGS = -Wall -Werror -std=c++17
SRCS = main.cc getArguments.cc process.cc usage.cc version.cc capitalize.cc lower_case.cc
OBJS = $(SRCS:.cc=.o)
MAIN = ex20

all: $(MAIN)
	@echo  Simple compiler named ex20 has been compiled

%.o: %.cc 
	$(CXX) $(CXXFLAGS) -c $<  -o $@


$(MAIN): $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $(MAIN) $(OBJS)

clean:
	$(RM) *.o *~ $(MAIN)
