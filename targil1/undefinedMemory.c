#include <stdio.h>


void potentially_unsafe(int offset) {
  // This variable points to an undefined memory location
  int* unknown_address = (int*)(offset + 0xDEADBEEF); // Example of a non-standard memory address

  printf("Trying to access memory at: %p\n", unknown_address);

  // This line will likely cause undefined behavior (segfault)
  int value = *unknown_address; // Dereferencing the unknown pointer
  printf("Value at unknown memory (might not be printed): %d\n", value);
}

int main() {
  printf("Calling function with potentially undefined behavior...\n");
  potentially_unsafe(10); // Offset value doesn't affect undefined behavior

  printf("Program might crash here if undefined behavior occurred.\n");
  return 0;
}
