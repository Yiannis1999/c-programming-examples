// C program to print an inverted
// hollow star pyramid using while
// loop
#include <stdio.h>
void pattern_fun(int row) {
  // Declaring and initializing
  // the loop control variables.
  int j = 1;
  int sp = 1;
  int k = 1;
  // To iterate through the rows
  while (j <= row) {
    // Initializing the space
    // control variable.
    sp = 1;
    // To print the beginning spaces
    while (sp <= j - 1) {
      printf(" ");
      // Incrementing the value
      sp++;
    }
    // Iterating from jth column to
    // last column (row*2 - (2*j - 1))
    int last_col = (row * 2 - (2 * j - 1));
    // Initializing the column control
    // variable.
    k = 1;
    // To iterate through column
    while (k <= last_col) {
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
      // Incrementing the value
      k++;
    }
    // Proceeding to next row.
    printf("\n");
    // Incrementing the value
    j++;
  }
}
// Driver code
int main() {
  // Number of rows
  int row = 4;
  // Calling the function to
  // print the pattern.
  pattern_fun(row);
  return 0;
}