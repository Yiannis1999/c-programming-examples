// C Program to Find the Largest Number Among Three using
// Temporary Variable
#include <stdio.h>
int main() {
  int a = 10, b = 22, c = 9;

  // Assume a is the largest
  int max = a;

  // If b is larger than max
  if (max < b)
    max = b;

  // If c is larger than max
  if (max < c)
    max = c;

  printf("%d is the largest number.", max);
  return 0;
}