// C Program to remove duplicates from a sorted array
// using two-pointer technique
#include <stdio.h>

int removeDuplicates(int arr[], int N) {

  // If array is empty, return 0
  if (N == 0) {
    return 0;
  }

  // Initialize a pointer to store unique elements
  int i = 0;

  // Loop through the array using the second pointer
  for (int j = 1; j < N; j++) {
    // If current element is not equal to the previous unique element
    if (arr[i] != arr[j]) {
      // Increment the pointer and update the unique element
      i++;
      arr[i] = arr[j];
    }
  }

  // Return the number of unique elements
  return i + 1;
}

int main() {
  int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
  int N = sizeof(arr) / sizeof(arr[0]);

  // Get the new length after removing duplicates
  int newLength = removeDuplicates(arr, N);

  printf("Array after removing duplicates: ");
  for (int i = 0; i < newLength; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}