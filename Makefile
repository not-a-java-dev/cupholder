CC = gcc


cupholder: cupholder.o
	${CC} -o cupholder cupholder.o -Wall

cupholder.o: cupholder.c
	${CC} -c cupholder.c -Wall

clean:
	rm -f ./*.o
	rm ./cupholder

