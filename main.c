#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "readLine.h"

#include "e.h"
#include "d_cmd.h"
#include "execCmds.h"
#include "sortStrcmp.h"
#include "sortLength.h"
#include "cap.h"
#include "reverse.h"
#include "rmRepeats.h"


// print the elements in the array, up to (but not including) the first
// NULL entry
void printLines(char** a) {
  int i;
  for (i = 0; a[i] != NULL; i++) {
    printf("%s\n", a[i]);
  }
}

// our array that tells how command-strings map to functions
commandMap map[] = {
  {"-rr", reverses},
  {"-p", printLines},

  {"-s", sortStrcmp},
  {"-l", sortLength},
  {"-u", toUpperCase},
  {"-t", trimm},
  {"-r", reverseLines},
  {"-i", rmRepeats},
  {"-e", e_cmd},
  {"-d", d_cmd},


  {"-r", reverseLines},
  {"-i", rmRepeats},


  {NULL, NULL},
};

// main function
int main(int argc, char* argv[]) {
  // read lines from standard input
  char** lines = readLines();

  // execute each command on the command line
  executeCommands(lines, map, argv);

  // exit with "success"
  return EXIT_SUCCESS;
}
