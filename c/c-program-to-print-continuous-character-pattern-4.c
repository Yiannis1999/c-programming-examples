// C program to print continuous
// character pattern by converting
// number in to character
#include <stdio.h>
// Driver code
int main() {
  int i = 1, j = 0;
  // Number of rows
  int rows = 5;
  // Given a number
  int number = 65;
  while (i <= rows) {
    while (j <= i - 1) {
      // Converting number in to character
      char character = (char)(number);
      // Printing character to get the
      // required pattern
      printf("%c ", character);
      j++;
      // Incrementing number value so
      // that it will print the next
      // character
      number++;
    }
    printf("\n");
    j = 0;
    i++;
  }
  return 0;
}