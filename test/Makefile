ORIGIN=main
SOURCE=$(ORIGIN).cpp
OUTPUT=$(ORIGIN)


run:	$(OUTPUT) compile
	./$(OUTPUT)
compile:	$(SOURCE)
	g++ -Wall $(SOURCE) -o $(OUTPUT)   
clean: 
	rm -r *.o
