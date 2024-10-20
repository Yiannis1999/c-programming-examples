// C program to find the length of a string manually using a loop
#include <stdio.h>

int stringLen(char *str) {
  int length = 0;

  // Loop till the NULL character is found
  while (*str != '\0') {
    length++;

    // Move to the next character
    str++;
  }
  return length;
}

int main() {
  char str[1000] = "GeeksforGeeks";
  int length = stringLen(str);
  printf("Length of the String is %d", length);

  return 0;
}