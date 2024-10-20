// C program to sort an array in descending
// order using qsort()
#include <stdio.h>
#include <stdlib.h>

// Comparator function to sort in descending
// order
int compare(const void *a, const void *b) { return (*(int *)b - *(int *)a); }

int main() {
  int arr[] = {45, 22, 100, 66, 37};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Sorting the array using qsort
  qsort(arr, n, sizeof(int), compare);

  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  return 0;
}