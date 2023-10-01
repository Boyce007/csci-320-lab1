explode: main.c lab1.c
	$(CC) -o $@ $?


lab1.o: lab1.c
	$(CC) -c $?

main.c:main.o
	$(CC) -c $?