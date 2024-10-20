// C Program to Find the Largest Number Among Three Numbers
// using a Custom Max Function
#include <stdio.h>

// Custom function to find the maximum of two numbers
int findMax(int b, int a) {

  // Return a if a is greater than or equal to b, else
  // return b
  return (a >= b) ? a : b;
}

int main() {
  int a = 10, b = 22, c = 9;

  // Calling max function for the first two numbers and then
  // for its returned value and third number.
  int max = findMax(findMax(a, b), c);

  printf("%d is the largest number.", max);

  return 0;
}