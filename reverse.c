#include <string.h>
#include <stdio.h>

void reverseLines(char** a) {
  int i;
  int j;
  for(j = 0; a[j] != NULL; j++);
  for(i = 0; i < (int)(j/2); i++) {
    char* tmp = a[i];
    a[i] = a[j-1-i];
    a[j-1-i] = tmp;
  }
}
