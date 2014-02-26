#include <stdio.h>
#include <string.h>

void rmRepeats(char** a) {
  int i;
  for(i = 0; a[i] != NULL; i++) {
    if(a[i+1] != NULL && strcmp(a[i], a[i+1]) == 0) {
      a[i] = "";
    }
  }
}
