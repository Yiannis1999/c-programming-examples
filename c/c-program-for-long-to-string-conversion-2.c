// C Program for Long to String Conversion
#include <stdio.h>
int main() {
  long x = 1234;
  char str[256];
  sprintf(str, "%ld", x);
  printf("The string is : %s", str);
  return 0;
}