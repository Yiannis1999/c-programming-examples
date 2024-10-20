// C Program to remove all Occurrences
// of an Element in an Array
#include <stdio.h>
int main() {
  int array[6] = {1, 2, 1, 3, 1}, size = 5, value = 1;
  int i;
  // iterating the array elements
  for (i = 0; i < size; i++) {
    // if array element is equal to the given value then
    // continue the loop else return the array element
    if (array[i] != value) {
      printf("%d ", array[i]);
    }
  }
  return 0;
}