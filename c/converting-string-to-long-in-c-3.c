#include <stdio.h>
#include <stdlib.h>
int main() {
  long l;
  char *str;
  str = "349639 geeksforgeeks";
  l = atol(str);
  printf("l = %.ld\n", l);
  return 0;
}