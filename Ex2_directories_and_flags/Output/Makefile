
all: main

main: sum.o main.o
	gcc -o main sum.o main.o
	
main.o: ../Source/main.c 
	gcc -o main.o -c -I../Source ../Source/main.c
	
sum.o: ../Source/Sum.c 
	gcc  -o sum.o -c -I../Source ../Source/Sum.c 
	
#In the case above the -I flag indicates which directory
#the compiler need to look for the headers.
	
#main: sum.o main.o
#	gcc -o main sum.o main.o

#main.o: ../Source/main.c ../Source/sum.h
#	gcc -o main.o -c ../Source/main.c

#sum.o: ../Source/Sum.c ../Source/Sum.h
#	gcc -o sum.o -c ../Source/Sum.c

clean:
	del -rf *.o 
	del -rf *.exe