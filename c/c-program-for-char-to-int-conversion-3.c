// C program to demonstrate conversion of char to int
// using atoi()
#include <stdio.h>
#include <stdlib.h>

int main() {

  // Define a character variable
  char ch = '5';

  // Convert the character to a string and then use
  // atoi() to convert it to an integer
  int N = atoi(&ch);

  // Print the result
  printf("The integer value of character '%c' is %d\n", ch, N);

  return 0;
}