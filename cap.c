#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "readLine.h"
#include "execCmds.h"
void toUpperCase(char** a)
{
  int i;
  int j;
  for(i = 0;a[i]!=NULL;i++)
    {
      char * toCap = a[i];
      for(j = 0;j<strlen(toCap);j++)
	{
	  if(toCap[j]>'Z')
	    {
	      toCap[j]=toCap[j]-32;
	    }
	}
      printf("%s \n", toCap);
    }
}

void trimm (char** a)
{
  int i;
  int j;
  for(i = 0;a[i]!=NULL;i++)
    {
      char * toTrim = a[i];
      for(j=0;toTrim[j]==' ';j++)
	{
	  if(toTrim[j]==' ')
	    {
	  toTrim[j]=1;
	    }
    }
      for(j=strlen(toTrim)-1;toTrim[j]==' ';j--)
	{
	  toTrim[j]=1;
	}
      printf("%s \n", a[i]);
    }
}

void reverses (char** a)
{
  int i;
  int j;
  for(i = 0;a[i]!=NULL; i++)
    {
      char * toReverse = a[i];
      for(j = 0;j<strlen(toReverse)/2;j++)
	{
	  char temp = toReverse[j];
	  toReverse[j] = toReverse[strlen(toReverse)-1-j];
	  toReverse[strlen(toReverse)-1-j] = temp;
	}
 printf("%s \n", a[i]);
    }
}
