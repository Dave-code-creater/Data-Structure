#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "array.h"

int main(void)
{
    system("clear");

    printf("Hello World\n");

    int* arr = NULL;
    int length = Length_Of_Array();
    int max = 0;

    printf("The length of the array: %d\n",length);

    arr = Create_Array(length);

    Read_Array(arr,length);
    
    max = Find_Max_Element(arr, length);
    printf("The biggest value in the array is : %d\n", max);
    
    free(arr);
    return 0;
}