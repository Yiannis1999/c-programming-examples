// C Program to Check Prime Number using Square Root Optimized
// Trial Division Approach
#include <math.h>
#include <stdio.h>

int isPrime(int N) {

  // Check divisibility from 2 to sqrt(N)
  for (int i = 2; i <= sqrt(N); i++) {

    // If N is divisible by i, it is not a prime number
    if (N % i == 0) {
      return 0;
    }
  }

  // If no divisors were found, N is a prime number
  return 1;
}

int main() {
  int N = 10;
  printf("Is %d prime?\n", N);

  // Check if the number is prime
  if (isPrime(N)) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}