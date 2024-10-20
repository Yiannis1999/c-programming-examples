// C program to demonstrate hexadecimal to decimal
// conversion using an array
#include <math.h>
#include <stdio.h>
#include <string.h>
int main() {
  int decimalNumber = 0;
  // Storing hexa number digits in one array
  char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  char hexadecimalnumber[30] = "2D";
  int i, j, power = 0, digit;
  // Converting hexadecimal number to equivalent decimal
  // number
  for (i = strlen(hexadecimalnumber) - 1; i >= 0; i--) {
    // search if given input character is present in the
    // array or not. if it present in the array then
    // find the equivalent decimal number for each hexa
    // digit
    for (j = 0; j < 16; j++) {
      if (hexadecimalnumber[i] == hexDigits[j]) {
        decimalNumber += j * pow(16, power);
      }
    }
    power++;
  }
  // printing the result
  printf("Decimal Number : %d", decimalNumber);
  return 0;
}