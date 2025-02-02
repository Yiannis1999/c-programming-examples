// C program to Demonstrate Floyd's Triangle
// Using for loop
#include <stdio.h>
void floyd(int n) {
  int i, j = 1;
  // Condition printing the number of element
  for (i = 1; i <= (n * (n + 1)) / 2; i++) {
    printf("%d ", i);
    // condition for row of number of element printing
    if (i == (j * (j + 1)) / 2) {
      printf("\n");
      j++;
    }
  }
}
int main() {
  floyd(6);
  return 0;
}