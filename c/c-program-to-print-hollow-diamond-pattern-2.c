// C Program To Print Hollow Diamond
// Pattern using while loop
#include <stdio.h>
int main() {
  int n = 5, rows = 1, columns;
  // while loop is used to identify
  // the number of rows and
  // it is used to print upper triangle
  while (rows <= n) {
    columns = n;
    // used for printing the spaces
    while (columns > rows) {
      printf(" ");
      columns--;
    }
    // print star
    printf("*");
    columns = 1;
    while (columns < (rows - 1) * 2) {
      printf(" ");
      columns++;
    }
    if (rows == 1) {
      printf("\n");
    } else {
      printf("*\n");
    }
    rows++;
  }
  // while loop is used to identify
  // the number of rows and
  // it is used to print lower triangle
  rows = n - 1;
  while (rows >= 1) {
    columns = n;
    // used for printing the spaces
    while (columns > rows) {
      printf(" ");
      columns--;
    }
    // print star
    printf("*");
    columns = 1;
    while (columns < (rows - 1) * 2) {
      printf(" ");
      columns++;
    }
    if (rows == 1) {
      printf("\n");
    } else {
      printf("*\n");
    }
    rows--;
  }
  return 0;
}