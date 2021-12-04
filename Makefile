all: output

output: main.o stack.o node.o 
	gcc -o output main.o stack.o node.o 

main.o: main.c stack.h 
	gcc -c main.c 

stack.o: stack.c stack.h 
	gcc -c stack.c 

node.o: node.c node.h
	gcc -c node.c 

clean: 
	rm -f output *.o