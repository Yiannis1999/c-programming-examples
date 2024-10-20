// C Program to Remove leading zeros
// using strspn
#include <stdio.h>
#include <string.h>
int main() {
  // input string
  char *s = "0001234";
  int n;
  // strspn->Returns the length of the first segment of
  // str1 that exclusively contains characters from str2.
  if ((n = strspn(s, "0")) != 0 && s[n] != '\0') {
    // printing the string after eliminating the zeros
    printf("%s", &s[n]);
  }
  return 0;
}