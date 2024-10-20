#include <stdio.h>
int main() {
  int num = 71;
  if (num >= 0 && num <= 127) {
    printf("The character representation of %d is: %c\n", num, num);
  } else {
    printf("The integer %d is out of range for character representation\n",
           num);
  }
  return 0;
}