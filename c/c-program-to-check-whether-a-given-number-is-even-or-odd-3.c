// C Program to Check Even or Odd Using Bitwise AND Operator
#include <stdio.h>

void checkEvenOdd(int num) {
  int temp = num;
  temp = temp >> 1;
  temp = temp << 1;

  // Check if the number is even or odd using bitwise AND operator
  if (temp = num) {
    printf("Even\n");
  } else {
    printf("Odd\n");
  }
}

int main() {
  int num = 7;
  checkEvenOdd(num);
  return 0;
}