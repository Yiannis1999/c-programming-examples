// C program to find the size of string by pointer
// substraction
#include <stdio.h>

int stringLen(char *str) {
  // Start pointer pointing at the beginning
  char *ptr = &str[0];

  // Move the pointer until it points to null character
  while (*ptr)
    ptr++;

  // Difference between the address will give the length
  return ptr - str;
}

int main() {
  char str[] = "GeeksforGeeks";

  //
  int length = stringLen(str);
  printf("Length of the String is %d\n", length);
  return 0;
}