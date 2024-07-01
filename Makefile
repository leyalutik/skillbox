SOURCE=main.cpp
EXE=main


run:	$(EXE)
	./$(EXE)

compile:	$(SOURCE)
	g++ -Wall $(SOURCE) -o $(EXE)


