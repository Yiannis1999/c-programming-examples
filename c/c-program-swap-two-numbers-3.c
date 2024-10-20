// C Program to Swap Two Numbers using Bitwise
// XOR Operator
#include <stdio.h>

int main() {
  int a = 5, b = 10;

  // Apply XOR operations in the given order
  // to swap values
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  printf("a = %d, b = %d\n", a, b);
  return 0;
}