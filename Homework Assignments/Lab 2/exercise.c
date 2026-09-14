/********************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: September 13, 2026
// Class: C Programming
// Assignment: Week 2
// Purpose: Demonstrate use of different variable types, operations, formatting,
and special characters.
// File Name: "exercise.c"
********************************************************************************/

#include <stdio.h>

int main() {
    /*
    Declare the following variables:
    Int: x,y,product,landSpeed
    Float: decimalValue,weight
    Double: difference,result
    Char: letter
    */
    int x;
    int y;
    int product;
    int landSpeed;
    float decimalValue;
    float weight;
    double difference;
    double result;
    char letter='X';

    x=34;
    y=45;
    // Multiply x and y to find product
    product=x*y;
    // Prints the product variable as a String
    printf("product = %d \n", product);

    // Add x and y to find landSpeed
    landSpeed=x+y;
    // Prints variable sum as a String
    printf("sum = %d \n", landSpeed);

    decimalValue=99.3;
    weight=33.21;
    // subtract weight from decimalValue to find difference
    difference=decimalValue-weight;
    // Prints the difference as a String
    printf("diff = %.14f \n", difference);

    // Divide product by the difference to find result
    result=product/difference;
    // Prints the result as a String
    printf("result = %.15f \n", result);

    // Prints the letter as a String
    printf("The value of letter is %c \n", letter);

    // Prints the following String that was given in the instructions
    // C syntax requires doubling of the amount of "\" you are trying to print
    printf("<<--- --- --- \\\\\\ -o- /// --- --- --->> \n");
    
    // Prints my initials "RJM" since my name is Ryan Jeremy Muniz
    printf("######       # #     # \n");
    printf("#     #      # ##   ## \n");
    printf("#     #      # # # # # \n");
    printf("######       # #  #  # \n");
    printf("#   #   #    # #     # \n");
    printf("#    #  #    # #     # \n");
    printf("#     #  ####  #     # \n");

    // Program finished successfully
    return 0;
}