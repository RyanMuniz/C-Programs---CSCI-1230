/********************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: September 13, 2026
// Class: C Programming
// Assignment: Lab 2.5
// Purpose: Practice using user input, different variable types, scanf, type
conversions, and output formatting
// File Name: "input.c"

Note: Code Template and comments to begin assignment was provided by 
my professor Guadalupe Torres 
********************************************************************************/

#include <stdio.h>

int main() {
	//2
	//Student header printfs
	printf("Name: Ryan Muniz\n");
    printf("Class: C Programming\n");
    printf("Assignment: Lab 2.5\n");
    printf("Program: input.c\n");
    printf("Purpose: Practice with User Inputs and Conversions! ^_^\n");
    printf("\n");
	//Remember in the latest versions of C variables can be created 
	//anywhere as long as they are created before they are used.
		
	printf("Hello Welcome to Lab 2.5 Input \n");
	printf("\n");
	//3
	//Declare the variable.
	//Create a user prompt requesting a character.
	//Create a scanf line to get the character into the variable myChar.
	//Output the character.
	char myChar;

	printf("Please enter a character: ");
	scanf("%c", &myChar);
    printf("\n");
	printf("The user input: %c\n", myChar);
    printf("\n");
	
	
	//4
	//Declare the variable.
	//Create a user prompt requesting a short.
	//Create a scanf line to get the short into the variable myShort.
	//Output the short.
	short myShort;

	printf("Please enter a short: ");
	scanf("%hd", &myShort);
    printf("\n");
	printf("The user input: %hd\n", myShort);
    printf("\n");
	
	
	//5
	//Declare the variable.
	//Create a user prompt requesting an integer.
	//Create a scanf line to get the interger into the variable myInt.
	//Output the integer.
	int myInt;

	printf("Please enter an integer: ");
	scanf("%d", &myInt);
    printf("\n");
	printf("The user input: %d\n", myInt);
    printf("\n");
	
	
	//6
	//Declare the variable.
	//Create a user prompt requesting a float.
	//Create a scanf line to get the float into the variable myFloat.
	//Output the float.
	float myFloat;

	printf("Please enter a float: ");
	scanf("%f", &myFloat);
    printf("\n");
	printf("The user input: %f\n", myFloat);
    printf("\n");
	
	
	//7
	//Declare the variables.
	//Write user prompts the user to enter two numbers, 
	//a floating-point number (a decimal number) and an integer.
	//Use scanf to read the input values from the user.
	//Convert.
	//Display the results.
    float num1;
    int num2;
    int num3;
    float num4;

    printf("Okay! Lets try doing a conversion!\n");
	printf("Please enter a floating-point number: ");
	scanf("%f", &num1);
    printf("Please enter an integer: ");
    scanf("%d", &num2);
    num3=(int)num1;
    num4=(float)num2;
    printf("\n");
	printf("Original User Values:\n");
    printf("Number 1 (floating number): %f\n", num1);
    printf("Number 2 (integer): %d\n", num2);
    printf("\n");
    printf("Converted Values:\n");
    printf("Number 1 (converted to integer): %d\n",num3);
    printf("Number 2 (converted to float): %f\n", num4);



   	return 0;
}