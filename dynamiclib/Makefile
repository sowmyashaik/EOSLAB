CC=gcc

main: main.o add.o sub.o
	$(CC) -o main main.o add.o sub.o
	$(CC) -o libdynamiclib.so -fPIC -shared add.o sub.o

main.o: main.c 
	$(CC) -c -o main.o main.c

add.o: add.c 
	$(CC) -c -o add.o add.c 

sub.o: sub.c 
	$(CC) -c -o sub.o sub.c
clean:
	rm -rf *.o main