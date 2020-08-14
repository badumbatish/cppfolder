### find and replace temp with your name of library
src = main.cpp
obj = $(src:.cpp=.o)
dep = $(obj:.o=.d) 


OUTPUTFILE = main.o
CXXFLAGS= -O2 -g -std=c++14 -Wall 
  # Flags option used for compiling C++ files

# Compiler Options
CC       = g++ # compiler used for compiling C files 
CXX      = g++ # compiler used for compiling C++ files

$(OUTPUTFILE): $(obj)
	$(CXX) $(CXXFLAGS) -I/usr/src/googletest/googletest -I/usr/local/include -I/usr/local/lib -I/usr/include -lgtest -lpthread  -o $@ $^ 

# Generate dependencies of .cpp files 
-include $(dep)
%.d: %.cpp
	$(CXX) $(CXXFLAGS) $< -MM -MT $(@:.d=.o) >$@
	
.PHONY: clean
clean:
	rm -f $(obj) $(OUTPUTFILE)
.PHONY: cleandep
cleandep:
	rm -f $(dep)
	
.PHONY: run
run:
	./$(OUTPUTFILE)
