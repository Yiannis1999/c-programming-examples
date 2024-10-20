#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  long i = 1234;
  char buffer[100];
  sprintf(buffer, 10, "%ld", i);
  printf("string is %s\n", buffer);
  return 0;
}