// Program to check for a palindrome string
// using two pointers
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void isPalindrome(char *str) {

  // Index pointer to the start
  int left = 0;

  // Index pointer to the end
  int right = strlen(str) - 1;

  // Run the loop till both pointer
  // meet
  while (left < right) {

    // If characters don't match,
    // string is not palindrome
    if (str[left] != str[right]) {
      printf("\"%s\" is not palindrome.\n", str);
      return;
    }

    // Move both pointers towards
    // each other
    left++;
    right--;
  }

  // If all characters match,
  // string is palindrome
  printf("\"%s\" is palindrome.\n", str);
}

int main() {

  // Checking if given strings are palindrome
  isPalindrome("madam");
  isPalindrome("hello");
  return 0;
}