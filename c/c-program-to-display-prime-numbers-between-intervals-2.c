// C Program to Display Prime
// Numbers Between Intervals
#include <stdbool.h>
#include <stdio.h>
// function to check if a given number is prime
bool isPrime(int n) {
  // since 0 and 1 is not prime return false.
  if (n == 1 || n == 0)
    return false;
  // Run a loop from 2 to square root of n.
  for (int i = 2; i * i <= n; i++) {
    // if the number is divisible by i, then n is not a
    // prime number.
    if (n % i == 0)
      return false;
  }
  // otherwise, n is prime number.
  return true;
}
// Driver code
int main() {
  // lower value of interval
  int a = 1;
  // upper value of interval
  int b = 10;
  // Print display message
  printf("Prime numbers between %d and %d are: ", a, b);
  // Traverse each number in the interval
  // with the help of for loop
  for (int i = a; i <= b; i++) {
    // If the number is prime print it
    if (isPrime(i))
      printf("%d ", i);
  }
  return 0;
}
// This code is contributed by Susobhan Akhuli