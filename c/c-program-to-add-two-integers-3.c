// C program to add two numbers using Bitwise operators
#include <stdio.h>

int main() {
  int a, b, sum, carry;

  // Take two integer numbers from user
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  while (b) {

    // Carry is AND of a and b
    carry = a & b;

    // Sum without carry is XOR of a and b
    a = a ^ b;

    // Carry is shifted by one so that it can be
    // added in the next iteration
    b = carry << 1;
  }

  printf("Sum = %d\n", a);
  return 0;
}