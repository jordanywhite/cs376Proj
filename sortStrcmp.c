#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void sortStrcmp(char** s)
{ 
  int n;
  int count = 0;
  for (n = 0; s[n] != NULL; n++)
    {
      count++; // counts # of elements
    }
  int i;
  int j;
  char * temp;
  for (i = 0; i < count; i++)
    {
      for (j = 0; j < count-1; j++)
	{
	  if (strcmp(s[j],s[j+1]) > 0) // swaps strings if first is bigger than second by strcmp method
	    {
	      temp = s[j+1];
	      s[j+1] = s[j];
	      s[j] = temp;
	    }
	}
    }
}
