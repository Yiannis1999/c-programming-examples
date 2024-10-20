// C program to find quotient and
// remainder
#include <stdio.h>
// Driver code
int main() {
  int A = 17, B = 5;
  int quotient = 0;
  // Initializing the loop
  while (quotient * B <= A)
    quotient++;
  // Decrementing 1 because we came
  // one step forward
  quotient--;
  int remainder = A - (B * quotient);
  printf("Quotient when A/B is: %d\n", quotient);
  printf("Remainder when A/B is: %d", remainder);
  return 0;
}