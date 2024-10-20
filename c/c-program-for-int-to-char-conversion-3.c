// C program to demonstrate conversion of
// int to char using sprintf()
#include <stdio.h>
int main() {
  int num = 71;
  char c[1];
  sprintf(c, "%c", num);
  printf("The character value is %s", c);
  return 0;
}