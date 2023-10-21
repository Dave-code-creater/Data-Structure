//array.c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "array.h"

int Length_Of_Array(void)
{
    int length_of_array;

    do {
        printf("How many elements do you want to have in the array? ");
        if (scanf("%d", &length_of_array) != 1) {
            printf("Invalid input. Please enter a positive integer.\n");
            while (getchar() != '\n'); // consume any remaining input
            length_of_array = -1; // set to invalid value to loop again
        }
    } while (length_of_array < 0);

    return length_of_array;
}

int* Create_Array(int Length)
{
    int* arr = malloc(Length * sizeof(int)); // allocate memory for the array

    if (arr == NULL) {
        printf("Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < Length; i++) {
        printf("Enter the value for element at position %d: ", i);
        scanf("%d", &arr[i]);
    }

    return arr;
}

void Read_Array(int* Array, int Length)
{
    printf("This is the array:\n");
    for (int i = 0; i < Length; i++) {
        printf("%d ", Array[i]);
    }
    printf("\n");
}

void Read_Inverse_Array(int* Array, int Length)
{
    printf("This is an inverse array: ");
    for (int i = Length - 1; i >= 0; i--)
    {
        printf("%d ", Array[i]);
    }
    printf("\n");
}

int Sum_Of_All_Element(int* Array, int Length)
{
    int total = 0;
    for (int i = 0; i < Length; i++)
    {
        total += Array[i];
    }
    return total;
}

int* Copy_Array(int* Array, int Length)
{
    int* Array_Copy = malloc(Length * sizeof(int)); // allocate memory for the array

    if (Array_Copy == NULL) {
        free(Array_Copy);
        printf("Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < Length; i++)
    {
        Array_Copy[i] = Array[i];
    }

    return Array_Copy;
}

// int Number_Of_Duplicate_Number(int* Array, int Length)
// {
//     int Number_of_duplicate_number = 0;
//     for (int i = 0; i < Length; i++)
//     {
//         for (int k = i + 1; k < Length; k++) // Start from i+1 to avoid redundant comparisons
//         {
//             if (Array[i] == Array[k])
//             {
//                 Number_of_duplicate_number++;
//             }
//         }
//     }
//     return Number_of_duplicate_number;
// }


// 0 - False 1 - True
bool Contains_Duplicate_Element(int* nums, int numsSize){
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] == nums[j])
            {
                return true;
            }
        }
    }
    return false;
}

// Return value size * 2
int* Get_Concatenation(int* Array, int Length)
{
    int * Return_Array = malloc(Length * 2 * sizeof(int));

    if (Return_Array == NULL) {
        printf("Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < Length; i++)
    {
        Return_Array[i] = Return_Array[i + Length] = Array[i];
    }

    return Return_Array;
}

int Find_Max_Element(int* Array, int Length)
{
    int max = 0; 
    for (int i = 0 ; i < Length; i++)
    {
        if (Array[i] > max)
        {
            max = Array[i];
        }
        else
        {
            continue;
        }
    }
    return max;
}

int Find_Smallest_Element(int* Array, int Length)
{
    int small = 0; 
    for (int i = 0 ; i < Length; i++)
    {
        if (Array[i] > small)
        {
            small = Array[i];
        }
        else
        {
            continue;
        }
    }
    return small;
}

int* Odd_Even_Orderes(int* Array, int* Odd, int* Even,  int Length)
{
    int * Odd = NULL;
    int * Even = NULL;
    int odd = 0;
    int even = 0;
    for (int i = )
}