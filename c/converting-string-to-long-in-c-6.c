#include <stdio.h>
#include <string.h>
long stringToLong(char *str) {
  long result = 0;
  int sign = 1, i = 0;
  if (str[0] == '-') {
    sign = -1;
    i++;
  }
  for (; str[i] != '\0'; i++) {
    result = result * 10 + str[i] - '0';
  }
  return sign * result;
}
int main() {
  char str[] = "123456789";
  long result = stringToLong(str);
  printf("%ld\n", result);
  return 0;
}