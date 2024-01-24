app: main.o IsArmstrong.o power.o
	gcc $^ -o app

main.o: main.c library.h
	gcc -c main.c

power.o: utils/power.c
	gcc -c utils/power.c

IsArmstrong.o: IsArmstrong.c library.h
	gcc -c IsArmstrong.c

clean:
	rm *.o app 