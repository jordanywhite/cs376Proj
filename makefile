prog: main.o readLine.o execCmds.o sortStrcmp.o sortLength.o
	gcc -o prog main.o readLine.o execCmds.o sortStrcmp.o sortLength.o

main.o: main.c readLine.h execCmds.h sortStrcmp.h sortLength.h
	gcc -c main.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

sortStrcmp.o: sortStrcmp.c sortStrcmp.h
	gcc -c sortStrcmp.c

sortLength.o: sortLength.c sortLength.h
	gcc -c sortLength.c

clean:
	rm -f *.o prog
