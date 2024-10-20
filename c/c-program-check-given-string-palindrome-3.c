// Program to check for a palindrome string
// using a recursive approach
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Recursive helper function to check if the string
// is palindrome
bool palinHelper(char *str, int left, int right) {

  // If the start and end pointers cross
  // each other, it means all characters
  // have matched
  if (left >= right)
    return true;

  // If characters don't match,
  // string is not palindrome
  if (str[left] != str[right])
    return false;

  // Recursively check for the rest of
  // the string
  return palinHelper(str, left + 1, right - 1);
}

void isPalindrome(char *str) {

  // Calling the recursive function to check
  // palindrome string
  if (palinHelper(str, 0, strlen(str) - 1))
    printf("\"%s\" is palindrome.\n", str);
  else
    printf("\"%s\" is not palindrome.\n", str);
}

int main() {

  // Checking if the given strings are palindrome
  isPalindrome("madam");
  isPalindrome("hello");
  return 0;
}