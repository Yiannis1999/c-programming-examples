// C program to find the length of
// string using strlen function
#include <stdio.h>
#include <string.h>

int main() {
  char str[1000] = "GeeksforGeeks";

  // Calling strlen with Str as argument
  int len = strlen(str);
  printf("Length of the String is %d", len);

  return 0;
}