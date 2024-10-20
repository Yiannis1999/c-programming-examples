#include <stdio.h>
int main() {
  int n = 5;
  for (int i = 1; i <= n; i++) {
    // Print leading spaces
    for (int j = i; j < n; j++) {
      printf(" ");
    }
    // Print asterisks
    for (int k = 1; k <= 2 * i - 1; k++) {
      if (k == 1 || k == 2 * i - 1 || i == n) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    // Move to the next line after each row
    printf("\n");
  }
  return 0;
}