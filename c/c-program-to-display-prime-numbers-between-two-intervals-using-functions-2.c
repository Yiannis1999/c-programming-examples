// C Program to demonstrate Prime Numbers
// Between Two Intervals Using for
// loop in a function
#include <stdio.h>
int isPrime(int number) {
  int i;
  // condition for finding the
  // prime numbers between the
  // given intervals
  for (i = 2; i <= number / 2; i++) {
    // if the number is divisible
    // by 1 and self then it
    // is prime number
    if (number % i == 0) {
      return 0;
    }
  }
  return 1;
}
// Driver code
int main() {
  int num1 = 2, num2 = 10;
  printf("The prime numbers between %d to %d are: ", num1, num2);
  while (num1 <= num2) {
    // calling the function
    if (isPrime(num1)) {
      // printing the result
      printf("%d, ", num1);
    }
    num1++;
  }
  return 0;
}