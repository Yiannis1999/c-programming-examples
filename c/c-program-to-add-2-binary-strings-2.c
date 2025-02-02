#include <stdio.h>

int main() {

  long binary1 = 10000, binary2 = 10000;
  int i = 0, remainder = 0, sum[20];

  while (binary1 != 0 || binary2 != 0) {
    sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
    remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
    binary1 = binary1 / 10;
    binary2 = binary2 / 10;
  }
  if (remainder != 0)
    sum[i++] = remainder;
  --i;
  printf("Sum of two binary numbers: ");
  while (i >= 0)
    printf("%d", sum[i--]);
  return 0;
}