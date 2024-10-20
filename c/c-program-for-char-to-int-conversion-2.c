// C program to demonstrate conversion of
// char to int using sscanf()
#include <stdio.h>

int main() {

  // Define a character variable
  char ch = '8';

  // Declare an integer variable to store the converted value
  int N;

  // Use sscanf to convert the character to an integer
  sscanf(&ch, "%d", &N);

  printf("The integer value of character '%c' is %d\n", ch, N);

  return 0;
}