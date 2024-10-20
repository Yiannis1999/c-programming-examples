// C Program to demonstrate scrunity of
// 2 Common Array Elements Using Merge
// Sort and then Traversing
#include <stdio.h>
int main() {
  int array1[] = {1, 2, 2, 3, 5, 6, 7, 8, 18, 29, 37};
  int array2[] = {2, 2, 4, 5, 7, 9, 10, 18};
  int i = 0, j = 0, flag, x, k = 0;
  int result[100];
  // Calculate size of arrays
  int array1_size = sizeof(array1) / sizeof(array1[0]);
  int array2_size = sizeof(array2) / sizeof(array2[0]);
  printf("Common elements are: ");
  // Step 1
  while (i < array1_size && j < array2_size) {
    // Step 2
    if (array1[i] < array2[j]) {
      i++;
    }
    // Step 3
    else if (array1[i] > array2[j]) {
      j++;
    }
    // Step 4
    else {
      flag = 0;
      // To traverse in result array.
      for (x = 0; x < k; x++) {
        // Check whether found element is already
        // present in result array or not.
        if (result[x] == array1[i]) {
          flag++;
        }
      }
      // If we found a new element which is common in
      // both arrays then store it in result array and
      // print it.
      if (flag == 0) {
        printf("%d ", array1[i]);
        result[k] = array1[i];
        k++;
      }
      i++;
      j++;
    }
  }
  return 0;
}