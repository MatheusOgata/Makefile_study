

CC = gcc
SRC = $(wildcard *.c)
DEP = $(SRC:.c=.o) 

all: $(DEP) main

%:  %.o 
	$(CC) -o $@  $(DEP)


%.o:	%.c %.h
	$(CC) -c $< -o $@
	
clean:
	del  $(DEP)
	del  *.exe 