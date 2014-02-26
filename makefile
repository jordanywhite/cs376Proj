
prog: main.o readLine.o execCmds.o reverse.o rmRepeats.o cap.o
	gcc -o prog main.o readLine.o execCmds.o reverse.o rmRepeats.o cap.o

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

cap.o:	cap.c cap.h
	gcc -c cap.c

clean:
	rm -f *.o prog
