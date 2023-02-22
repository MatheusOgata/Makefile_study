
EXECUTABLE = .\Exe
OUTPUT = .\Output
SRC = .\Source
CC = gcc

all: $(OUTPUT)\main

$(OUTPUT)\main: $(OUTPUT)\sum.o $(OUTPUT)\main.o
	$(CC) -o $(EXECUTABLE)\main $(OUTPUT)\sum.o $(OUTPUT)\main.o
	
$(OUTPUT)\main.o: $(SRC)\main.c $(SRC)\sum.h
	$(CC) -o $(OUTPUT)\main.o -c $(SRC)\main.c
	
$(OUTPUT)\sum.o: $(SRC)\Sum.c $(SRC)\Sum.h
	$(CC) -o $(OUTPUT)\sum.o -c $(SRC)\Sum.c
	
clean:
	del -rf $(OUTPUT)\*.o 
	del -rf $(EXECUTABLE)\*.exe 