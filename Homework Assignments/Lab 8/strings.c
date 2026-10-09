/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: October 8, 2026
// Class: C Programming
// Assignment: Lab 8
// Purpose:
// Reverses a string and counts the number of
// characters and words in a user-entered string
// File Name: "strings.c"
**************************************************************************/

#include <stdio.h>
#include <string.h>


// Functions
void reverseString(char string[], int length);
int countCharacters(char string[]);
int countWords(char string[]);

int main(void) {
    char reverseInput[101];
    char countInput[101];
    int length;
    int characterCount;
    int wordCount;

    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose:\n");
    printf("Reverses a string and counts the number of\n");
    printf("characters and words in a user-entered string\n");
    printf("File Name: strings.c\n");
    printf("=========================\n");

    printf("Welcome to the String Functions Program!\n\n");
    // 1: Ask the user for a string to reverse
    printf("Task 1: Reversing a String\n");
    printf("Please enter a string: ");
    // fgets allows the user to enter spaces as part of the string!
    fgets(reverseInput, sizeof(reverseInput), stdin);

    /*
    fgets normally stores the newline from pressing enter
    strcspn finds that newline so it can be replaced with '\0'
    */
    reverseInput[strcspn(reverseInput, "\n")] = '\0';
    // strlen determines the number of characters in the string
    length = strlen(reverseInput);
    // Reverse the contents of the string using our function
    reverseString(reverseInput, length);
    printf("Reversed string: %s\n\n", reverseInput);

    // 2: Ask the user for another string to analyze
    printf("Task 2: Counting Characters and Words\n");
    printf("Please enter a new string: ");
    fgets(countInput, sizeof(countInput), stdin);
    // Remove the newline character added by fgets
    countInput[strcspn(countInput, "\n")] = '\0';
    // Call the functions that count characters and words
    characterCount = countCharacters(countInput);
    wordCount = countWords(countInput);

    printf("Character count: %d\n", characterCount);
    printf("Word count: %d\n", wordCount);

    return 0;
}

/*
reverseString
Reverses the characters in a string by swapping characters from
the beginning and end until the middle of the string is reached
*/
void reverseString(char string[], int length) {
    int i;
    char temp;
    /*
    only half of the string needs to be visited because each
    loop swaps two characters
    */
    for (i = 0; i < length / 2; i++) {
        // Temporarily save the character from the beginning
        temp = string[i];
        // Move the matching character from the end to the beginning
        string[i] = string[length - 1 - i];
        // Place the saved character at the matching end position
        string[length - 1 - i] = temp;
    }
}

/*
countCharacters
Returns the number of characters in the string. Spaces and
punctuation are included in the character count
*/
int countCharacters(char string[]) {
    int count = 0;
    /*
    Continue through the string until the null terminator '\0'
    marks the end of the string
    */
    while (string[count] != '\0') {
        count++;
    }
    return count;
}

/*
countWords
Counts words by detecting when a non-space character
begins a new word
*/
int countWords(char string[]) {
    int i = 0;
    int words = 0;
    int inWord = 0;
    // Examine each character until the end of the string
    while (string[i] != '\0') {
        // A space means we are currently outside of a word
        if (string[i] == ' ') {
            inWord = 0;
        }
        /*
        If character is not a space and we were not already
        inside a word, then a new word has started
        */
        else if (inWord == 0) {
            words++;
            inWord = 1;
        }
        i++;
    }
    return words;
}


