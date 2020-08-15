### find and replace temp with your name of library



src = main.cpp
obj = $(src:.cpp=.o)
dep = $(obj:.o=.d) 


OUTPUTFILE = final.o
LDFLAGS = -L/usr/src/googletest/googletest -lgtest -pthread 
CXXFLAGS= -O0 -g -std=c++14 -Wall 
TARGET = demo
  # Flags option used for compiling C++ files

# Compiler Options
CC       = g++ # compiler used for compiling C files 
CXX      = g++ # compiler used for compiling C++ files

$(OUTPUTFILE): $(obj)
	$(CXX) $(CXXFLAGS)  -o $@ $^ $(LDFLAGS)
	

# Generate dependencies of .cpp files 
-include $(dep)
%.d: %.cpp
	$(CXX) $(CXXFLAGS) $< -MM -MT $(@:.d=.o) >$@ $(LDFLAGS)
	
.PHONY: clean
clean:
	rm -f $(obj) $(OUTPUTFILE)
.PHONY: cleandep
cleandep:
	rm -f $(dep)
	
.PHONY: run
run:
	./$(OUTPUTFILE)
