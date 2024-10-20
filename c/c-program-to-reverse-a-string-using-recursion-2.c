// C program to reverse a string
// using recursion
#include <stdio.h>
// Function to print reverse of the
// passed string
void reverse(char *str, int index, int n) {
  // return if we reached at last index or
  // at the end of the string
  if (index == n)
    return;
  // storing each character starting from index 0
  // in function call stack;
  char temp = str[index];
  // calling recursive function by increasing
  // index everytime
  reverse(str, index + 1, n);
  // printing each stored character while
  // recurring back
  printf("%c", temp);
}
// Driver code
int main() {
  char a[] = "Geeks for Geeks";
  int n = sizeof(a) / sizeof(a[0]);
  reverse(a, 0, n);
  return 0;
}