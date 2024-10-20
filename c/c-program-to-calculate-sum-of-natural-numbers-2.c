// C Program to demonstrate
// Sum of Natural Numbers
// using for loops
#include <stdio.h>
int main() {
  int i, s = 0;
  int n = 10;
  for (i = 0; i <= n; i++) {
    // adding natural numbers
    // up to given number n
    s += i;
  }
  // printing the result
  printf("Sum = %d", s);
  return 0;
}