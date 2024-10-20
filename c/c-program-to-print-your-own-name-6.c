// C Program to Print Your Own Name using write system call
#include <string.h>
#include <unistd.h>

int main() {

  // Define the name string
  char name[] = "Gabriel";

  // Print the name using the write system call
  write(STDOUT_FILENO, name, strlen(name));

  return 0;
}