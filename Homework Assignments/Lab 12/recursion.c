/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: November 17, 2026
// Class: C Programming
// Assignment: Lab 12
// Purpose: Demonstrate recursion using factorials, Fibonacci numbers,
// array summation, and string reversal.
// File Name: "recursion.c"
**************************************************************************/

#include <stdio.h>
#include <string.h>

// Functions
int factorial(int n);
int fibonacci(int n);
int arraySum(int arr[], int size);
void reverseString(char str[], int start, int end);

// Task 1: Calculates the factorial of a number recursively
int factorial(int n) {
    // Base case: factorial of 0 or 1 is always 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: multiply n by the factorial of n-1
    return n * factorial(n - 1);
}

// Task 2: Calculates the nth Fibonacci number recursively
int fibonacci(int n) {
    // Base cases: the first two Fibonacci numbers are 0 and 1
    if (n <= 1) {
        return n;
    }
    // Recursive case: add the two preceding Fibonacci numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Task 3: Calculates the sum of array elements recursively
int arraySum(int arr[], int size) {
    // Base case: an empty array has a sum of zero
    if (size == 0) {
        return 0;
    }
    // Recursive case: add the last element to the remaining sum
    return arr[size - 1] + arraySum(arr, size - 1);
}

// Task 4: Reverses a string in place using recursion
void reverseString(char str[], int start, int end) {
    char temp;
    // Base case: stop when the positions meet or cross
    if (start >= end) {
        return;
    }
    // Save the character at the beginning of the string
    temp = str[start];
    // Swap the beginning and ending characters
    str[start] = str[end];
    str[end] = temp;
    // Recursively move inward to swap the next pair
    reverseString(str, start + 1, end - 1);
}

int main(void) {
    int i;

    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Demonstrate recursive functions in C.\n");
    printf("File Name: recursion.c\n");
    printf("=========================\n");
    printf("\n");

    // Task 1: Factorial
    printf("Task 1: Factorial Function\n");
    // Call factorial with 5 and display result
    printf("factorial(5) = %d\n\n", factorial(5));

    // Task 2: Fibonacci Numbers
    printf("Task 2: Fibonacci Numbers\n");
    // Loop through the first ten Fibonacci positions
    for (i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n\n");

    // Task 3: Recursive Array Sum
    printf("Task 3: Recursive Array Sum\n");
    // Initialize an array containing five integers
    int numbers[5] = {2, 4, 6, 8, 10};
    // Pass the array and its size to the recursive function
    printf("Sum of array = %d\n\n", arraySum(numbers, 5));

    // Task 4: Recursive String Reverse
    printf("Task 4: Recursive String Reverse\n");
    // Initialize a character array with the word recursion
    char word[] = "recursion";
    // Display the string before reversal
    printf("Original string: %s\n", word);
    // Reverse the string from its first to last character
    reverseString(word, 0, strlen(word) - 1);
    // Display modified string
    printf("Reversed string: %s\n\n", word);

    return 0;
}