CXX = g++
CXXFLAGS = -ggdb -Wall -pthread -std=c++20
SOURCE=main.cpp
#MODULES=test_framework.cpp main_functions.cpp tic_tac_toe.cpp tests.cpp
#OBJMODULES=$(MODULES:.cpp=.o)
ERROR_OUTPUT=error.txt


GOAL=$(SOURCE:.cpp=$*)

all: run 

run : $(GOAL)
	./$(GOAL)

#.o:.cpp .h
#	$(CXX) $(CXXFLAGS) -c $< 

$(GOAL) : $(SOURCE) #$(OBJMODULES)
	$(CXX) $(CXXFLAGS) $^ -o $@  

clean : 
	rm -f *.o

