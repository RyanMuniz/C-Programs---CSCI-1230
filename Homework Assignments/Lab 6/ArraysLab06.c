//==============================================================================
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: October 7, 2026
// Class: C Programming
// Assignment: Lab 6 Arrays
// Purpose: Demonstrate array manipulation and pointer arithmetic
// File Name: "ArraysLab06.c"

// Start with int main(){}.
// Coding shell provided by instructor Guadalupe Torres for assignment.
//==============================================================================

#include <stdio.h>


// Q2 Create function DisplayArrayElements, remember it that takes the array 
// and its size as parameters and displays all elements in the array.

/*
Function: DisplayArrayElements
Purpose: Displays every element stored in an integer array.
Parameters:
    array - the integer array that will be displayed
    size - the number of elements stored in the array
Returns:
    Nothing because this function only displays info
*/
void DisplayArrayElements(const int array[], int size) {
    // Start at index 0 and continue until every array element has been visited
    for (int i=0; i<size; i++) {
        // array[i] accesses the stored value at the current index i
        printf("%d ", array[i]);
    }
    printf("\n");    
}

// Q3 Write a function that calculates and returns the sum of all elements in 
// the array using pointer arithmetic, without using array subscripts.

/*
Function: SumArray
Purpose: Adds all values in an integer array using pointer arithmetic
Parameters:
    array - a pointer to the first element of the integer array
    size - the number of elements stored in the array
Returns:
    The sum of every element in the array
*/
int SumArray(const int *array, int size) {
    // total begins at 0 because no array values have been added
    int total = 0;
    // Loop once for each element in the array
    for (int i=0; i<size; i++) {
        // Array + i moves the pointer i integer positions forward
        total += *(array+i);
    }
    // Send the finished sum back to the function that called SumArray()
    return total;
}

/*
Function: 
    SwapPointerNotation
Purpose: 
    Swaps two integer values using pointer dereferencing
Parameters:
    first - pointer to the first value being swapped
    second - pointer to the second value being swapped
Returns:
    Nothing because this function modifies the original array directly
*/
void SwapPointerNotation(int *first, int *second) {
    int temp = *first;
    // Replace the value pointed to by first w/ the value pointed to by second
    *first = *second;
    // Put the original first value into the location pointed to by second
    *second = temp;
}

/*
Function:
    SwapArrayNotation
Purpose:
    Swaps the values stored at two memory locations
    using array subscript notation
Parameters:
    first - pointer to the first integer
    second - pointer to the second integer
Returns:
    Nothing because the original values are modified directly
*/
void SwapArrayNotation(int *first, int *second) {
    // Save the first value before overwriting it
    int temp = first[0];
    // Place the second value into the first location
    first[0] = second[0];
    // Place the saved first value into the second location
    second[0] = temp;
}

// Q7 Write a function valueCount that takes the integer value ‘101’ as input 
// and counts how many times that value appears in the array. 

/*
Function: 
    valueCount
Purpose:
    Counts how many times a target integer appears in an array
Parameters:
    array - the integer array that will be searched
    size - the number of elements in the array
    target - the integer value we are looking for
Returns:
    The number of times target appears in the array
*/
int valueCount(const int array[], int size, int target) {
    // Count begins at 0 because no matches have been found yet
    int count = 0;
    // Look at every element of the array one at a time
    for (int i=0; i<size; i++) {
        // Compare the current array element against the target value
        if (array[i] == target) {
            // If they are equal, increment count by one
            count++;
        }
    }
    // Return total number of matching values back to main()
    return count;
}

/*
main

Purpose:
    Controls the overall order of the program and calls each function
*/

int main(){
	//2. student header
	printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Demonstrate array manipulation and pointer arithmetic\n");
    printf("File Name: ArraysLab06.c\n");
    printf("=========================\n\n");
	
	//3. Declare and possibly initialize your variables. 
	//Hint: You will be making 4 variables by the end of this program.
	
    /*
    sizeOfMyArray stores the number of elements contained in myArray
    There are 10 integers in the array so the size is 10
    */
    int sizeOfMyArray = 10;
    /*
    mySum will eventually store the integer returned by SumArray()
    */
    int mySum = 0;
    /*
    myCount will eventually store the number of times 
    101 appears inside myArray
    */
    int myCount = 0;
    /*
    target stores the specific value that we want valueCount() to search for
    */
    int target = 101;
	
	//Declare and initialize an integer array named myArray.
	//Remeber the contents should be: 101,202,303,404,505,101,707,808,909,101.
	//Your code.
    int myArray[10] =
        {
            101, 202, 303, 404, 505,
            101, 707, 808, 909, 101
        };
	
	printf("Array Lab: Ryan Muniz\n");
    // 1. Display the original array
    printf("Q1: ===================================================\n");
    /*
    Call DisplayArrayElements()
    myArray passes the array to the function
    sizeOfMyArray tells the function how many elements to print
    */
    DisplayArrayElements(myArray, sizeOfMyArray);

    // 2. Find the sum using pointer arithmetic
    printf("Q2: ===================================================\n");
    /*
    SumArray() adds all ten array elements and returns the result
    The returned value is then assigned to mySum
    */
    mySum = SumArray(myArray, sizeOfMyArray);
    // Display the calculated sum
    printf("Sum: %d\n", mySum);
    
    // 3. Swap the first and fifth elements
	printf("Q3: ===================================================\n");
    /*
    arrays use zero-based indexing
    first element = index 0
    fifth element = index 4

    the & operator means "address of"
    &myArray[0] therefore gives the memory address of the first element
    &myArray[4] gives the memory address of the fifth element

    these addresses are then passed to SwapArrayNotation()
    */
    SwapArrayNotation(&myArray[0], &myArray[4]);
    // Display the array so we can see the result of the swap
    DisplayArrayElements(myArray, sizeOfMyArray);

	// 4. Swap the third and last elements using pointer arithmetic
	printf("Q4: ===================================================\n");
	/*
    third element = index 2
    last element = index 9

    the name myArray acts like a pointer to the first element

    myArray + 2 therefore points to the third element
    myArray + 9 points to the tenth/last element
    */
    SwapPointerNotation(myArray + 2, myArray + 9);
    // Display the array again so we can see the second swap
    DisplayArrayElements(myArray, sizeOfMyArray);

	// 5. Display the array in reverse order
	printf("Q5: ===================================================\n");
    /*
    the last valid index of an array is always size - 1
    since this array contains 10 elements
    10 - 1 = index 9
    the loop starts at index 9 and decreases i by 1 each time
    until index 0 has also been printed
    */
    for (int i = sizeOfMyArray - 1; i>=0; i--) {
        // Print the element at the current index
        printf("%d ", myArray[i]);
    }
    // Move to the next line after the reverse array has been displayed
    printf("\n");
	
	// 6. Count how many times 101 appears
	printf("Q6: ===================================================\n");
    /*
    call valueCount() and give it:
    1. myArray --> the array being searched
    2. sizeOfMyArray --> number of elements
    3. target --> the number we are searching for is 101

    valueCount() returns the number of matches
    */
    myCount = valueCount(myArray, sizeOfMyArray, target);
    // Display the target number and how many times it was found
    printf("Count of %d: %d\n", target, myCount);


	//Call DisplayArrayElements
	
	// 7. Display the final array 
	printf("Q7: ===================================================\n");
    /*
    display the array one final time
    */
    DisplayArrayElements(myArray, sizeOfMyArray);

    // Return 0 to indicate program completed successfully
	return 0;
}