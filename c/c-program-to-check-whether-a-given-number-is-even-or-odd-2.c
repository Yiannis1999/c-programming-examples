// C Program to Check Even or Odd Using Bitwise
// AND Operator
#include <stdio.h>

void checkEvenOdd(int N) {

  // Check if the number is even or odd using bitwise
  // AND operator
  if (N & 1) {
    printf("Odd\n");
  } else {
    printf("Even\n");
  }
}

int main() {
  int N = 7;
  checkEvenOdd(N);
  return 0;
}