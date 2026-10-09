/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: October 8, 2026
// Class: C Programming
// Assignment: Lab 7
// Purpose: 
// To generate and display a random 3x3 matrix using 
// a 2D array and calculate the sums of its rows, columns, and diagonals.
// File Name: "MultiD.c"
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose:\n");
    printf("To generate and display a random 3x3 matrix using\n");
    printf("a 2-dimensional array and calculate the sums of\n");
    printf("its rows, columns, and diagonals.\n");
    printf("File Name: MultiD.c\n");
    printf("=========================\n");

    // Declare a 3x3 array to hold nine integer values
    int matrix [3][3];
    // Declare variables to track the rows and columns
    int row;
    int column;
    // Declare variable to store row and column sums
    int rowSum;
    int columnSum;
    // Initialize both diagonal sums to zero
    int mainDiagonalSum = 0;
    int antiDiagonalSum = 0;
    // Seed the random number generator using the current time
    srand(time(NULL));
    // Fill each position in the matrix with a number from 0 to 9
    for (row = 0; row < 3; row++) {
        // Loop through all three columns in the current row
        for (column = 0; column < 3; column++) {
            // Store a random number in the current matrix position
            matrix[row][column] = rand() % 10;
        }
    }

    // Display the heading for the randomly generated matrix
    printf("\nRandom 3x3 Matrix:\n");
    // Loop through each row to display the matrix
    for (row = 0; row < 3; row++) {
        // Print the horizontal border above each row
        printf("+---+---+---+\n");
        // Loop through each column and print its value
        for (column = 0; column < 3; column++) {
            // Print the value with spacing and a left border
            printf("| %d ", matrix[row][column]);
        }
        // Close the row with a right border and new line
        printf("|\n");
    }

    // Print the bottom border to complete the matrix
    printf("+---+---+---+\n");
    // Display the heading for the row sums
    printf("\nRow sums:\n");
    // Calculate the sum of each row in the matrix
    for (row = 0; row < 3; row++) {
        // Reset the sum to zero before starting new row
        rowSum = 0;
        // Add all three values in the current row
        for (column = 0; column < 3; column ++) {
            // += adds the current element to the running total
            rowSum += matrix[row][column];
        }
        // Add 1 because array indexes start at 0
        printf("Row %d: %d\n", row + 1, rowSum);
    }
    
    // Display the heading for the column sums
    printf("\nColumn sums:\n");
    // Calculate the sum of each column in the matrix
    for (column = 0; column < 3; column++) {
        // Reset the sum to zero before starting a new column
        columnSum = 0;
        // Move through each row of the current column
        for (row = 0; row < 3; row++) {
            // Adds the current element to the column total
            columnSum += matrix[row][column];
        }
        // Display column numbers starting at 1 instead of 0
        printf("Column %d: %d\n", column + 1, columnSum);
    }

    // Calculate the main and anti-diagonal sums
    for (row = 0; row < 3; row++) {
        // Add values from top-left to bottom-right
        mainDiagonalSum += matrix[row][row];
        // Add values from top-right to bottom-left
        antiDiagonalSum += matrix[row][2 - row];
    }
    // Display the calculated diagonal sums
    printf("\nDiagonal sums:\n");
    printf("Main diagonal: %d\n", mainDiagonalSum);
    printf("Anti-diagonal: %d\n", antiDiagonalSum);

    // Return 0 to indicate successful completion of program
    return 0;
}
