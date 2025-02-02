// C program to print an inverted hollow
// star pyramid using for loop
#include <stdio.h>
void pattern_fun(int row) {
  // To iterate through the rows
  for (int j = 1; j <= row; j++) {
    // To print the beginning spaces
    for (int sp = 1; sp <= j - 1; sp++) {
      printf(" ");
    }
    // Iterating from jth column to
    // last column (row*2 - (2*j - 1))
    int last_col = (row * 2 - (2 * j - 1));
    // To iterate through column
    for (int k = 1; k <= last_col; k++) {
      // To Print all star for first
      // row (j==1) jth column (k==1)
      // and for last column
      // (row*2 - (2*j - 1))
      if (j == 1 || k == 1)
        printf("*");
      else if (k == last_col)
        printf("*");
      else
        printf(" ");
    }
    // Proceeding to next row.
    printf("\n");
  }
}
// Driver code
int main() {
  // Number of rows
  int row = 7;
  // Calling the function to
  // print the pattern.
  pattern_fun(row);
  return 0;
}