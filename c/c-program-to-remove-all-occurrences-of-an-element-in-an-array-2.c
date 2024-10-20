// C Program to remove all Occurrences of
// an element in an array using functions
#include <stdio.h>
// function declaration
int remove_element(int *array, int n, int val) {
  int i;
  // iterating the array elements
  for (i = 0; i < n; i++) {
    // if array element is equal to the given value then
    // continue the loop else return the array element
    if (array[i] == val) {
      continue;
    } else {
      printf("%d ", array[i]);
    }
  }
}
int main() {
  int array[6] = {1, 2, 1, 3, 1}, size = 5, value = 1;
  remove_element(array, size, value);
  return 0;
}