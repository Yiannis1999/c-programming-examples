// C Program to demonstrate
// Sum of Natural Numbers
// using functions
#include <stdio.h>
int sumofnaturalnumbers(int num) {
  int i, s = 0;
  for (i = 0; i <= num; i++) {
    // adding natural numbers
    // up to given number n
    s += i;
  }
  // printing the result
  printf("Sum = %d", s);
}
int main() {
  int number = 10;
  // calling the function
  sumofnaturalnumbers(number);
  return 0;
}