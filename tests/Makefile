app1: main.o func1.o
	gcc -o main main.o func1.o

module1.o: func1.c func1.h
	gcc -c func1.c

app1.o: main.c app1.h
	gcc -c main.c
