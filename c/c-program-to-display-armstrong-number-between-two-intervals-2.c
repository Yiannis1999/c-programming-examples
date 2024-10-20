#include <math.h>
#include <stdio.h>

// Function to check if a number is an Armstrong
// cnumber using logarithms
int isArmstrong(int num) {
  int originalNum, remainder, result = 0;
  int n;

  // Calculate number of digits using logarithms
  originalNum = num;
  n = log10(num) + 1;

  // Compute the sum of each digit raised to
  // the power of n
  while (originalNum != 0) {
    remainder = originalNum % 10;
    result += pow(remainder, n);
    originalNum /= 10;
  }

  // Check if the result is equal to the original
  // number
  return (result == num);
}

int main() {
  int low = 1, high = 1000;

  printf("Armstrong numbers between %d and %d are: ", low, high);

  // Iterate through each number in the interval
  for (int i = low + 1; i < high; ++i) {
    if (isArmstrong(i)) {
      printf("%d ", i);
    }
  }

  return 0;
}