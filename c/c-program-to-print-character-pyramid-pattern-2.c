// C program to print character pattern by
// converting number in to character
#include <stdio.h>
int main() {
  int i, j;
  // input entering number of rows
  int rows = 5;
  // given a number
  int number = 65;
  // first for loop is used to identify number rows
  for (i = 0; i < rows; i++) {
    // second for loop is used to identify number
    // of columns based on the rows
    for (j = 0; j <= i; j++) {
      // converting number in to character
      char character = (char)(number);
      // printing character to get the required
      // pattern
      printf("%c ", character);
    }
    printf("\n");
    // incrementing number value so that it
    // will print the next character
    number++;
  }
  return 0;
}