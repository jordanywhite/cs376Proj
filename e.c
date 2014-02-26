#include <stdlib.h>
#include <stddef.h>
#include "readLine.h"
#include "e.h"
#define TOP 126
#define BOT 33


// e: shifts characters one ASCII value up
//
// parameters :void
//
// returns: nothing?
void e_cmd(char ** rollodex)
{
  // make new array with which to tamper.
  //char ** rollodex = letters;

  // shift over the letters
  int i;
  for (i = 0; rollodex[i] != NULL; i++)
    {
      int j;
      for (j = 0; rollodex [i][j] != NULL; j++)
	{
	  if (rollodex[i][j] <  BOT || rollodex[i][j] > TOP) continue;
	  if (rollodex[i][j] == TOP)
	    {
	      rollodex[i][j] = BOT;
	    }
	  else 
	    {
	    rollodex[i][j] = rollodex[i][j]++;
	    }
	}//for
    }//for

  // print the lines
  //printLine(rollodex);
}//e
