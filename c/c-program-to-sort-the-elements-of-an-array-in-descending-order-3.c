// C Program to Sort an Array in Descending Order
// using Bubble Sort
#include <stdio.h>

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {

      // Swap if the element found is smaller
      // than the next element
      if (arr[j] < arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {45, 22, 100, 66, 37};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Perform bubble sort
  bubbleSort(arr, n);

  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  return 0;
}