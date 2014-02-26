#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void sortLength(char** l)
{ 
  int n; // iterator
  int count = 0;
  for (n = 0; l[n] != NULL; n++)
    {
      count++; // counts # of elements
    }
  int i;
  int j; // iterators
  char * temp;
  for (i = 0; i < count; i++)
    {
      for (j = 0; j < count-1; j++)
	{
	  if (strlen(l[j]) > strlen(l[j+1])) // swaps strings if first string is bigger than second in length.
	    {
	      temp = l[j+1];
	      l[j+1] = l[j];
	      l[j] = temp;
	    }
	}
    }
}
