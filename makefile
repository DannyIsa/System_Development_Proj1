app: main.o IsArmstrong.o power.o numLength.o IsPalindrome.o
	gcc $^ -o app

main.o: main.c library.h
	gcc -c main.c

power.o: utils/power.c
	gcc -c utils/power.c

numLength.o: utils/numLength.c
	gcc -c utils/numLength.c

IsArmstrong.o: IsArmstrong.c library.h
	gcc -c IsArmstrong.c

IsPalindrome.o: IsPalindrome.c library.h
	gcc -c IsPalindrome.c

clean:
	rm *.o app