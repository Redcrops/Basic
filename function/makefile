count:demoFunc.o calculateFunc.o
	gcc demoFunc.o calculateFunc.o -o count

demoFunc.o:demoFunc.c
	gcc -c demoFunc.c -o demoFunc.o

calculateFunc.o:calculateFunc.c
	gcc -c calculateFunc.c -o calculateFunc.o

clean:
	@rm -rf *.o count