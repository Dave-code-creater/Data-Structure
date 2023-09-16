# Array Functions

This program provides a set of functions for working with arrays in C. The functions allow you to perform various operations on arrays, such as creating an array, reading and printing the array, calculating the sum of all elements, copying the array, and finding the number of duplicate numbers in the array.

## Functions

### `int Length_Of_Array(void)`

This function prompts the user to enter the desired length of the array and returns the length as an integer value. It validates the input to ensure that a positive integer is entered.

### `int* Create_Array(int Length)`

This function dynamically allocates memory for an array of the given length and prompts the user to enter values for each element of the array. It returns a pointer to the created array.

### `void Read_Array(int* Array, int Length)`

This function takes an array and its length as parameters and prints the elements of the array.

### `void Read_Inverse_Array(int* Array, int Length)`

This function takes an array and its length as parameters and prints the elements of the array in reverse order.

### `int Sum_Of_All_Element(int* Array, int Length)`

This function calculates and returns the sum of all elements stored in the array.

### `int* Copy_Array(int* Array, int Length)`

This function takes an array and its length as parameters, creates a copy of the array by dynamically allocating memory, and returns a pointer to the copied array.

### `int Number_Of_Duplicate_Number(int* Array, int Length)`

This function takes an array and its length as parameters and returns the number of duplicate numbers in the array.

## Usage

To use these functions, include the "array.h" header file in your C program and link against the "array.c" source file.

## License

This project is licensed under the MIT License


Please review the README file and make any necessary adjustments to fit your requirements.


Example usage:

```c
#include <stdio.h>
#include "array.h"

int main()
{
    int length = Length_Of_Array();
    int* array = Create_Array(length);

    printf("Original array:\n");
    Read_Array(array, length);

    printf("Inverse array:\n");
    Read_Inverse_Array(array, length);

    int sum = Sum_Of_All_Element(array, length);
    printf("Sum of all elements: %d\n", sum);

    int* arrayCopy = Copy_Array(array, length);
    printf("Copied array:\n");
    Read_Array(arrayCopy, length);

    int duplicateCount = Number_Of_Duplicate_Number(array, length);
    printf("Number of duplicate numbers: %d\n", duplicateCount);

    // Free dynamically allocated memory
    free(array);
    free(arrayCopy);

    return 0;
}


