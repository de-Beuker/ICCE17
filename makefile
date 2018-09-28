
# 'make'        build executable: 'file'
# 'make clean'  removes all .o and executable files
#
CXX = g++-7.1
CXXFLAGS = -Wall -Werror -std=c++17 
SRCS = main.cc
OBJS = $(SRCS:.cc=.o)
MAIN = file


all: $(MAIN)
	@echo  Simple compiler named file has been compiled

%.o: %.cc 
	$(CXX) $(CXXFLAGS) -c $<  -o $@


$(MAIN): $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $(MAIN) $(OBJS) 

clean:
	$(RM) *.o *~ $(MAIN)
