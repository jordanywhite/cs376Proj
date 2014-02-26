#include <stdlib.h>
#include <stddef.h>
#include "readLine.h"
#include "d_cmd.h"
#define TOP 126
#define BOT 33


// d: shifts characters one ASCII value down
//
// parameters :void
//
// returns: nothing?
void d_cmd(char ** rollodex)
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
	  if (rollodex[i][j] == BOT)
	    {
	      rollodex[i][j] = TOP;
	    }
	  else 
	    {
	    rollodex[i][j] = rollodex[i][j]--;
	    }
	}//for
    }//for

  // print the lines
  //printLine(rollodex);
}//d_cmd
