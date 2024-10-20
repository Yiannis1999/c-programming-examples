#include <stdio.h>
#include <stdlib.h>
int main() {
  char input[100] = "123456789";
  long num;
  sscanf(input, "%ld", &num);
  printf("%ld\n", num);
  return 0;
}