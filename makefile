explode: main.o lab1.o
	$(CC) -o $@ $?


lab1.o: lab1.c
	$(CC) -c $?

main.o:main.c
	$(CC) -c $?