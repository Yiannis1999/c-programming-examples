// C program to implement
// the above approach
#include <stdio.h>
#define M 4
#define N 3

// This function adds A[][] and B[][],
// and stores the result in C[][]
void add(int A[M][N], int B[M][N], int C[M][N]) {
  int i, j;
  for (i = 0; i < M; i++)
    for (j = 0; j < N; j++)
      C[i][j] = A[i][j] + B[i][j];
}

// This function prints the matrix
void printmatrix(int D[M][N]) {
  int i, j;
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++)
      printf("%d ", D[i][j]);
    printf("\n");
  }
}

// Driver code
int main() {
  int A[M][N] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}, {4, 4, 4}};

  int B[M][N] = {{2, 1, 1}, {1, 2, 2}, {2, 3, 3}, {3, 4, 4}};

  printf("Matrix A is \n");
  printmatrix(A);

  printf("Matrix B is \n");
  printmatrix(B);

  // To store result
  int C[M][N];
  int i, j;
  add(A, B, C);

  printf("Result matrix is \n");
  printmatrix(C);

  return 0;
}