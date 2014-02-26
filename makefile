prog: main.o readLine.o execCmds.o e.o d_cmd.o
	gcc -o prog main.o readLine.o execCmds.o e.o d_cmd.o

main.o: main.c readLine.h execCmds.h
	gcc -c main.c

readLine.o: readLine.c readLine.h
	gcc -c readLine.c

execCmds.o: execCmds.c execCmds.h
	gcc -c execCmds.c

e.o: e.c e.h
	gcc -c e.c

d_cmd.o: d_cmd.c d_cmd.h
	gcc -c d_cmd.c

clean:
	rm -f *.o prog
