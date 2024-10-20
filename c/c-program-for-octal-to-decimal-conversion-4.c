// C program to demonstrate conversion of
// octal to decimal without using functions
#include <math.h>
#include <stdio.h>
// Driver code
int main() {
  int octalnumber = 123, decimalnumber = 0;
  int i = 0;
  // while loop executes the statements
  // until the condition is false
  while (octalnumber != 0) {
    // Calculating equivalent decimal number
    // for the given octal number
    decimalnumber = decimalnumber + (octalnumber % 10) * pow(8, i++);
    octalnumber = octalnumber / 10;
  }
  // Printing the result
  printf("decimal number is: %d", decimalnumber);
  return 0;
}