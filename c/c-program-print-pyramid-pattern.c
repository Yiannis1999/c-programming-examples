// C program to print right half pyramid pattern of star
#include <stdio.h>
int main() {
  int rows;
  printf("Number of rows: ");
  scanf("%d", &rows);
  // first loop for printing rows
  for (int i = 1; i <= rows; i++) {
    // second loop for printing similar number in each
    // rows
    for (int j = 1; j <= i; j++) {
      printf("%d ", i);
    }
    printf("\n");
  }
  return 0;
}