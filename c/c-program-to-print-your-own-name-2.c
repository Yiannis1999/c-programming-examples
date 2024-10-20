// C Program to Print Your Own Name using scanf and printf
#include <stdio.h>

int main() {

  // Defining string (character array) assuming 100
  // characters at max
  char name[100];

  // Taking input from the user
  printf("Enter Your Name: ");
  scanf("%s", name);

  // Printing your name to the screen
  printf("Your Name: %s\n", name);

  return 0;
}