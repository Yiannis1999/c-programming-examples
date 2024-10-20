// C program to demonstrate conversion of
// octal to decimal using pow()
#include <math.h>
#include <stdio.h>
int Octaltodecimal(int octal) {
  int decimalnumber = 0, i = 0;
  // while loop executes the statements
  // until the condition is false
  while (octal != 0) {
    // Calculating equivalent decimal number
    // for the given octal number
    decimalnumber = decimalnumber + (octal % 10) * pow(8, i++);
    octal = octal / 10;
  }
  // printing the result
  return decimalnumber;
}
// Driver code
int main() {
  int octalnumber = 123;
  // calling function
  printf("decimal number is %d", Octaltodecimal(octalnumber));
  return 0;
}