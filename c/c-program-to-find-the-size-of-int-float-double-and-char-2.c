// C program to find the size of int, char,
// float and double data types
#include <stdio.h>

int main() {

  // Variables of int, char, float and double
  int integerType;
  char charType;
  float floatType;
  double doubleType;

  // Determine and Print  the size of integer type
  printf("Size of int is: %u bytes", sizeof(integerType));

  // Determine and Print the size of floatType
  printf("\nSize of float is: %u bytes", sizeof(floatType));

  // Determine and Print the size of doubleType
  printf("\nSize of double is: %u bytes", sizeof(doubleType));

  // Determine and Print the size of charType
  printf("\nSize of char is: %u bytes", sizeof(charType));

  return 0;
}