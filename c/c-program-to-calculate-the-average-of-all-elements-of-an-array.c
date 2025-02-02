// C program to demonstrate
// average of array elements
#include <stdio.h>
// Function that return average
// of given array.
double average(int a[], int n) {
  // Find the sum of array element
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += a[i];
  return (double)sum / n;
}
// Driver code
int main() {
  // Input array
  int arr[] = {1, 2, 3, 4, 5};
  // Size of array
  int n = sizeof(arr) / sizeof(arr[0]);
  // average(arr, n) function is return the
  // average of the array.
  int avg = average(arr, n);
  // Display average of given array
  printf("Average = %d ", avg);
  return 0;
}