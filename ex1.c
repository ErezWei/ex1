/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

  //Set variables for the whole program
  int firstNumber = 0, secondNumber = 0, bitPosition = 0, result = 0;

  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  printf("Please enter a number:\n");
  scanf("%d", &firstNumber);
  printf("Please enter a position:\n");
  scanf("%d", &bitPosition);
  /*Right shift firstNumber to bring user selected bit to index 0,
  Then apply mask to turn off all other bits except index 0. */
  result = (firstNumber >> bitPosition) & 0x1;
  printf("The bit in position %d of number %d is: %d\n", bitPosition, firstNumber, result);
  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:\n");
  scanf("%d", &firstNumber);
  printf("Please enter a position:\n");
  scanf("%d", &bitPosition);
  //Print number with user selected bit turned on
  printf("Number with bit %d set to 1: %d\n", bitPosition, firstNumber | (0x1 << bitPosition));
  //Print number with user selected bit turned off
  printf("Number with bit %d set to 0: %d\n", bitPosition, firstNumber & ~(0x1 << bitPosition));

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d", &firstNumber);
  printf("Please enter a position:\n");
  scanf("%d", &bitPosition);
  //Print number with user selected bit toggled
  printf("Number with bit %d toggled: %d\n", bitPosition, firstNumber ^ (0x1 << bitPosition));
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d", &firstNumber);
  //Toggle the bit at index 0, so if number was even it will be 1 and vice versa
  firstNumber = firstNumber ^ 0x1;
  //Print bit at index 0
  printf("%d\n", firstNumber & 0x1);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  printf("Please enter the first number (octal):\n");
  scanf("%o", &firstNumber);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &secondNumber);
  //Calculate and print sum
  result = firstNumber + secondNumber;
  printf("The sum in hexadecimal: %X\n", result);
  //Print bits in positions 3,5,7,11
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", (result >> 3) & 0x1, (result >> 5) & 0x1,
    (result >> 7) & 0x1, (result >> 11) & 0x1);

  printf("Bye!\n");
  
  return 0;
}
