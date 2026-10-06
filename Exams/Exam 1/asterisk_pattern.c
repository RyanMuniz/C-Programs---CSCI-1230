/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: October 5, 2026
// Class: C Programming
// Assignment: Exam 1
// Purpose: Prints asterisks in a given pattern.
// File Name: "asterisk_pattern.c"
**************************************************************************/

#include <stdio.h>

int main(void) {
    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Prints asterisks in a given pattern.\n");
    printf("File Name: asterisk_pattern.c\n");
    printf("=========================\n");

    // Outer loop controls the number of rows
    for (int row=1; row<=4; row++) {
        // Inner loop prints the correct number of asterisks for each row
        for (int star=1; star<=row; star++) {
            printf("*");
        }

        // Moves to the next line after each row is completed
        printf("\n");
    }
    // Indicates succesful completion of program
    return 0;
}