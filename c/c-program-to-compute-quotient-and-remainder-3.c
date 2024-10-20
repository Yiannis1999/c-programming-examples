// C program to find quotient and
// remainder
#include <stdio.h>
int find_quotient(int a, int b) {
  // Return Quotient
  return a / b;
}
int find_remainder(int a, int b) {
  // Return Quotient
  return a % b;
}
// Driver code
int main() {
  int A = 17, B = 5;
  int quotient = find_quotient(A, B);
  int remainder = find_remainder(A, B);
  printf("Quotient when A/B is: %d\n", quotient);
  printf("Remainder when A/B is: %d", remainder);
  return 0;
}