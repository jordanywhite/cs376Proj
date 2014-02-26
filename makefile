
prog: main.o readLine.o execCmds.o sortStrcmp.o sortLength.o
	gcc -o prog main.o readLine.o execCmds.o sortStrcmp.o sortLength.o

main.o: main.c readLine.h execCmds.h sortStrcmp.h sortLength.h
prog: main.o readLine.o execCmds.o reverse.o rmRepeats.o
	gcc -o prog main.o readLine.o execCmds.o reverse.o rmRepeats.o

main.o: main.c readLine.h execCmds.h reverse.h rmRepeats.h
	gcc -c main.c

reverse.o:	reverse.c
	gcc -c reverse.c

rmRepeats.o:	rmRepeats.c
	gcc -c rmRepeats.c

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
