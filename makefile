explode: main.0 lab1.0
	$(CC) -o $@ $?


lab1.o: lab1.c
	$(CC) -c $?

main.o:main.c
	$(CC) -c $?