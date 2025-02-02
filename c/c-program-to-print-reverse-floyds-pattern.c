// C program to demonstrate reversing
// of floyd's triangle
#include <stdio.h>
void Reverse_Floyd(int row) {
  // Calculating the maximum value
  int max_val = row * (row + 1) / 2;
  // Initializing num with the max value
  int num = max_val;
  // The outer loop maintains,
  // the number of rows.
  for (int i = row; i >= 1; i--) {
    // The inner loop maintains,
    // the number of column.
    for (int j = 1; j <= i; j++) {
      // To print the numbers.
      printf("%d ", num);
      // To keep decreasing the value
      // of numbers.
      num--;
    }
    // To proceed to next line.
    printf("\n");
  }
}
int main() {
  int row = 5; // The number of Rows to be printed.
               // Calling the Function.
  Reverse_Floyd(row);
  return 0;
}