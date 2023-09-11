sanitize = #-ggdb3 -fsanitize=address

all: StringFunctions

StringFunctions: main.o func.o
	gcc main.o func.o -o StringFunctions -lm $(sanitize)

main.o: main.c
	gcc -c main.c -o main.o -lm $(sanitize)

func.o: func.c
	gcc -c func.c -o func.o -lm $(sanitize)