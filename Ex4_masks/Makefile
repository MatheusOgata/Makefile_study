

CC = gcc
DEP = Sum.o main.o 

all: $(DEP) main

%:  %.o 
	$(CC) -o $@  $(DEP)


%.o:	%.c %.h
	$(CC) -c $< -o $@
	
clean:
	del  *.o 
	del  *.exe 