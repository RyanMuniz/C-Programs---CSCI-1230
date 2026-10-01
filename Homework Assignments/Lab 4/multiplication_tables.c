/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: September 30, 2026
// Class: C Programming
// Assignment: Lab 4
// Purpose: Generates and displays a multiplication table from 1-10
// for a user-entered positive integer using both a for loop and
// while loop.
// File Name: "multiplication_tables.c"
**************************************************************************/

#include <stdio.h>

int main(void) {
    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Generates and displays a multiplication table from 1-10\n");
    printf("for a user-entered positive integer using both a for loop and\n");
    printf("while loop.\n");
    printf("File Name: multiplication_tables.c\n");
    printf("=========================\n");

    // Stores positive integer entered by user
    int number;
    // Counter used by the while loop later in program
    int multiplier = 1;
    // Displays welcome message when program starts
    printf("Welcome to the Multiplication Table Generator!\n");
    // Ask user to enter the number they want the table for
    printf("Please enter a positive integer: ");
    // Reads integer and stores it in number
    scanf("%d", &number);

    // Prints a heading before multiplication table is made
    // with the for loop
    printf("\nMultiplication Table for %d (using for loop):\n", number);

    /*
    Loop repeats 10 times
    int i = 1 --> creates loop counter i and starts at 1
    i <= 10 --> loop continues while i is less than or equal to 10
    i++ --> Adds 1 to i after every loop iteration
    */
   for (int i=1; i<=10; i++) {
    /*
    Prints one line of multiplication table
    number = number entered by user
    i = current multiplier
    number*i = result of multiplication
    */
   printf("%d x %d = %d\n", number, i, number*i);
   }
   // Prints blank line and a heading before the while-loop table.
   printf("\nMultiplication Table for %d (using while loop):\n", number);
   /*
   This while loop continues as multiplier is <= to 10
   Multiplier was initialized to 1 near the beginning of program
   */
  while (multiplier <= 10) {
    // Prints current multiplication problem and result
    printf("%d x %d = %d\n",
        number,
        multiplier,
        number * multiplier);
        // Adds 1 to multiplier
        // Prevents indefinite running of loop
        multiplier++;
  }
  // Return 0 to indicate program finished successfully
  return 0;
}