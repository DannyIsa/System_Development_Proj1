app: main.o advancedClassificationRecursion.o advancedClassificationLoop.o basicClassification.o power.o numLength.o factorial.o
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
basicClassification.o: basicClassification.c library.h
	gcc -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c library.h
	gcc -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c library.h
	gcc -c advancedClassificationRecursion.c

### Clean
clean:
	rm *.o app