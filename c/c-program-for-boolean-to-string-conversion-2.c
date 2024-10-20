// C program to demonstrate Boolean to String
// Conversion using ternary operator
#include <stdbool.h>
#include <stdio.h>
int main() {
  bool n = true;
  const char *s = (n == true) ? "true" : "false";
  printf("%s", s);
  return 0;
}