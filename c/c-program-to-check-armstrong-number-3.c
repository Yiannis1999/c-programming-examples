// C Program to Check Armstrong Number Using Numeric Strings
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int isArmstrong(int N) {

  // Convert the number to a string
  char n_str[20];
  sprintf(n_str, "%d", N);

  // Get the number of digits in the string
  int K = strlen(n_str);
  int sum = 0;

  // Calculate the sum of the digits raised to the power
  // of num_digits
  for (int i = 0; i < K; i++) {
    int digit = n_str[i] - '0';
    sum += pow(digit, K);
  }

  // Return whether the sum equals the original number
  return sum == N;
}

int main() {
  int N = 153;

  // Check if the number is an Armstrong number
  if (isArmstrong(N)) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}