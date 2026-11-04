/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: November 4, 2026
// Class: C Programming
// Assignment: Exam 2
// Purpose: Calculate the sum of odd numbers and
// the product of even numbers in an int array
// File Name: "p3.c"
**************************************************************************/

#include <stdio.h>

int main(void) {
    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Calculate the sum of odd numbers and\n");
    printf("the product of even numbers in an int array\n");
    printf("File Name: p3.c\n");
    printf("=========================\n");

    // Initialize the array with 10 integers
    int numbers[10] = {3, 6, 7, 8, 5, 2, 4, 8, 1, 2};

    int oddSum = 0;
    int evenProduct = 1;
    int i;

    // Loop through each element in the array
    for (i = 0; i < 10; i++) {
        // Check whether the number is even
        if (numbers[i] % 2 == 0) {
            evenProduct *= numbers[i];
        }
        else {
        // Add odd numbers to the sum
        oddSum += numbers[i];
        }
    }
    // Display final results
    printf("Sum of odd numbers: %d\n", oddSum);
    printf("Product of even numbers: %d\n", evenProduct);
    return 0;
}

