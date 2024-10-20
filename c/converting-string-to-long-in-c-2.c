// C program to demonstrate working of strol()
#include <stdio.h>
#include <stdlib.h>
int main() {
  char string[40] = "100 GeeksforGeeks";
  long integer;
  char *ptr;
  // strtol function to convert number in string form to
  // long integer with base 10
  integer = strtol(string, &ptr, 10);
  printf("Integer part is %lu\n", integer);
  printf("String part is %s\n", ptr);
  return 0;
}