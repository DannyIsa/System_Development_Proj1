app: main.o IsArmstrong.o IsPalindrome.o IsPrime.o IsStrong.o power.o numLength.o factorial.o
	gcc $^ -o app

main.o: main.c library.h
	gcc -c main.c

### Util Functions
power.o: utils/power.c
	gcc -c utils/power.c

numLength.o: utils/numLength.c
	gcc -c utils/numLength.c

factorial.o: utils/factorial.c
	gcc -c utils/factorial.c

### Assignment Functions
IsArmstrong.o: IsArmstrong.c library.h
	gcc -c IsArmstrong.c

IsPalindrome.o: IsPalindrome.c library.h
	gcc -c IsPalindrome.c

IsPrime.o: IsPrime.c library.h
	gcc -c IsPrime.c

IsStrong.o: IsStrong.c library.h
	gcc -c IsStrong.c

### Clean
clean:
	rm *.o app