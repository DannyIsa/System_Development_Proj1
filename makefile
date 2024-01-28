all: loops recursives recursived loopd mains maindloop maindrec

loops: libclassloops.a

recursives: libclassrec.a

recursived: libclassrec.so

loopd: libclassloops.so

mains: main.o recursives
	gcc -Wall -o mains main.o libclassrec.a

maindloop: main.o libclassloops.so
	gcc -Wall main.o ./libclassloops.so -o maindloop

maindrec: main.o libclassrec.so
	gcc -Wall main.o ./libclassrec.so -o maindrec

### A Files
libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
	ranlib libclassloops.a

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
	ranlib libclassrec.a

libclassrec.so: basicClassification.c advancedClassificationRecursion.c basicClassification.o advancedClassificationRecursion.o
	gcc -Wall basicClassification.o advancedClassificationRecursion.o -shared -o libclassrec.so

libclassloops.so: basicClassification.c advancedClassificationLoop.c basicClassification.o advancedClassificationLoop.o
	gcc -Wall basicClassification.o advancedClassificationLoop.o -shared -o libclassloops.so

### Files Compile
main.o: main.c
	gcc -Wall -c main.c

basicClassification.o: basicClassification.c numLength.o factorial.o
	gcc -Wall -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c numLength.o power.o
	gcc -Wall -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c numLength.o power.o
	gcc -Wall -c advancedClassificationRecursion.c

### Util Functions
power.o: utils/power.c
	gcc -c utils/power.c

numLength.o: utils/numLength.c
	gcc -c utils/numLength.c

factorial.o: utils/factorial.c
	gcc -c utils/factorial.c
### Clean
clean:
	rm *.o *.a *.so mains maindloop maindrec