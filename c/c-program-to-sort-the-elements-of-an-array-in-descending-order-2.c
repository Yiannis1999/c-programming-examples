// C Program to Sort an Array in Descending Order
// using Selection Sort
#include <stdio.h>

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int max = i;

    // Find the maximum element in the remaining
    // unsorted array
    for (int j = i + 1; j < n; j++) {
      if (arr[j] > arr[max]) {
        max = j;
      }
    }

    // Swap the found maximum element with the
    // first element
    int temp = arr[max];
    arr[max] = arr[i];
    arr[i] = temp;
  }
}

int main() {
  int arr[] = {45, 22, 100, 66, 37};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Calling selection sort on arr
  selectionSort(arr, n);

  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  return 0;
}