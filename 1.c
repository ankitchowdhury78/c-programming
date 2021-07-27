//Write a program to swap first and last elements of an array.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The entered array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nNow the first and last elements will be swapped.\n");
    array[n-1] = array[0] + array[n-1] - (array[0] = array[n-1]);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

//Ankit Chowdhury