
# The backslash in the EXECUTABLE and OUTPUT variables path is due to the del windows commands which does 
#not accept juts slash.
EXECUTABLE = .\Exe
OUTPUT = .\Output
SRC = ./Source
DEP = Sum.o main.o 

#The -I flag indicates that the header files are inside the Include directory.
INC = -I./Include

# addprefix adds the path '.\Output' to all dependencies carried by 'DEP' variable.
OBJECTS = $(addprefix $(OUTPUT)/, $(DEP))
CC = gcc

# vpath specify directories where the compiler should look for files.
vpath %.c $(SRC)


all: $(OBJECTS) main

main: $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)/$@ 
	
$(OUTPUT)/%.o: %.c 
	$(CC) -c $(INC) $< -o  $@
	


	
clean:
	del  $(OUTPUT)\*.o 
	del  $(EXECUTABLE)\*.exe 
