//Write a program to print all the even numbers in an array

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nThe entered array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nThe even elements of the array are:\n");
    for (i = 0; i < n; i++)
    {
        if (array[i]%2 == 0)
            printf("%d ", array[i]);
    }
    return 0;
}

//Ankit Chowdhury