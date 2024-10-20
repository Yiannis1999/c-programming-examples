// C program to demonstrate conversion of
// octal to decimal without using pow()
#include <stdio.h>
// Function to convert octal to decimal
int octalToDecimal(int n) {
  int decimalvalue = 0;
  // Assigning base value to 1, i.e 8^0
  int base = 1;
  int temp = n;
  // while loop executes the statements until the
  // condition is false
  while (temp) {
    // Finding the last digit
    int lastdigit = temp % 10;
    temp = temp / 10;
    // Multiplying last digit with appropriate
    // base value and adding it to decimalvalue
    decimalvalue += lastdigit * base;
    base = base * 8;
  }
  return decimalvalue;
}
// Driver code
int main() {
  int octalnum = 123;
  printf("decimal number is %d", octalToDecimal(octalnum));
  return 0;
}