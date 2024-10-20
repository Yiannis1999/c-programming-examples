// C program to demonstrate working of strol()
#include <stdio.h>
#include <stdlib.h>
// Driver Code
int main() {
  // To store Number in String form.
  char string[10] = "123456789";
  long integer = 0;
  int i = 0;
  // Until null character is encountered
  while (string[i] != '\0') {
    integer = (integer * 10) + (string[i] - '0');
    i++;
  }
  // Printing the number
  printf("Number is %lu", integer);
  return 0;
}