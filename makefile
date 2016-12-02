/*Anna Teng 10061146
 *Henry Wang 10199252
 *Katherine Le 10188031
 *Marshall Ruse 10066247 
 */

udll.o: udll.c udll.h
	gcc -Wall -c udll.c -o udll.o

main.o: main.c
	gcc -Wall -c main.c -o main.o

universalDoubleLinkedList: udll.o main.o 
	gcc -Wall -o universalDoubleLinkedList main.o udll.o -lm
