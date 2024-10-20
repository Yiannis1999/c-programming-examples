// C program to demonstrate hexadecimal to decimal
// conversion using switch case
#include <math.h>
#include <stdio.h>
#include <string.h>
int main() {
  char hexdecnumber[32] = "2D";
  int decimalnumber, i;
  // used to store the power index
  int cnt;
  // used to store the digit
  int digit;
  cnt = 0;
  decimalnumber = 0;
  // iterating the loop using length of hexadecnumber
  for (i = (strlen(hexdecnumber) - 1); i >= 0; i--) {
    // using switch case finding the equivalent decimal
    // digit for each hexa digit
    switch (hexdecnumber[i]) {
    case 'A':
      digit = 10;
      break;
    case 'B':
      digit = 11;
      break;
    case 'C':
      digit = 12;
      break;
    case 'D':
      digit = 13;
      break;
    case 'E':
      digit = 14;
      break;
    case 'F':
      digit = 15;
      break;
    default:
      digit = hexdecnumber[i] - 0x30;
    }
    // obtaining the decimal number
    decimalnumber = decimalnumber + (digit)*pow((double)16, (double)cnt);
    cnt++;
  }
  // printing the decimal number
  printf("Decimal number is: %d", decimalnumber);
  return 0;
}