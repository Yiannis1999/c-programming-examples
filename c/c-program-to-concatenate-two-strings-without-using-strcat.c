// C program to Concatenate two string without using
// concat()
#include <stdio.h>

// Function to concatenate two strings
void concatenateStrings(char *str1, const char *str2) {
  // Navigate to the end of the first string
  while (*str1) {
    ++str1;
  }

  // Copy characters of the second string to the end of
  // the first string
  while (*str2) {
    *str1++ = *str2++;
  }

  // Add the null-terminating character
  *str1 = '\0';
}

int main() {
  char string1[50] = "Hello, ";
  char string2[] = "Geek!";

  // calling function to concatenate strings
  concatenateStrings(string1, string2);

  // Output the concatenated string
  printf("Concatenated String: %s\n", string1);

  return 0;
}