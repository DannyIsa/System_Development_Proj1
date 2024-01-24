mains: main.o IsArmstrong.o power.o
	gcc -o $@ $^

main.o: main.c library.h
	gcc -c $<

power.o: utils/power.c
	gcc -c $<

IsArmstrong.o: IsArmstrong.c library.h
	gcc -c $<
