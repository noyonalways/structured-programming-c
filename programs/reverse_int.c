#include <stdio.h>

int main () {
  int number, remainder, reversed_number = 0;

  // prompt the user for input
  printf("Enter a number: ");
  scanf("%d", &number);

  // loop to reverse the digits
  while(number != 0){
    remainder = number % 10;
    reversed_number = reversed_number * 10 + remainder;
    number = number / 10;
  }

  // display the result
  printf("Reversed number: %d\n", reversed_number);

  return 0;
}