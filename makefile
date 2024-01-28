all: loops recursives loopd recursived mains maindloop maindrec

loops: libclassloops.a

recursives: libclassrec.a

recursived: libclassrec.so

loopd: libclassloops.so

mains: main.o recursives
	gcc -Wall -o mains main.o libclassrec.a

maindloop: main.o libclassloops.so
	gcc -Wall main.o -o maindloop ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	gcc -Wall main.o -o maindrec ./libclassrec.so -lm

### A Files
libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
	ranlib libclassloops.a

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
	ranlib libclassrec.a

libclassrec.so: basicClassification.c advancedClassificationRecursion.c basicClassification.o advancedClassificationRecursion.o
	gcc -Wall basicClassification.o advancedClassificationRecursion.o -shared -fPIC -o libclassrec.so

libclassloops.so: basicClassification.c advancedClassificationLoop.c basicClassification.o advancedClassificationLoop.o
	gcc -Wall basicClassification.o advancedClassificationLoop.o -shared -fPIC -o libclassloops.so

### Files Compile
main.o: main.c
	gcc -fPIC -Wall -c main.c

basicClassification.o: basicClassification.c
	gcc -fPIC -Wall -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c
	gcc -fPIC -Wall -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c
	gcc -fPIC -Wall -c advancedClassificationRecursion.c

### Clean
clean:
	rm *.o *.a *.so mains maindloop maindrec