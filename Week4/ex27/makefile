
# 'make'        build executable: 'ex27'
# 'make clean'  removes all .o and executable ex27s
#
CXX = g++-8.1
CXXFLAGS = -Wall -Werror -std=c++17 
SRCS = *.cc
OBJS = $(SRCS:.cc=.o)
MAIN = ex27


all: $(MAIN)
	@echo  Simple compiler named ex27 has been compiled

%.o: %.cc 
	$(CXX) $(CXXFLAGS) -c $<  -o $@


$(MAIN): $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $(MAIN) $(OBJS) 

clean:
	$(RM) *.o *~ $(MAIN)
