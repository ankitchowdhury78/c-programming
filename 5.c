//Write a program to find product of all the elements of the array.

#include <stdio.h>

int main()
{
    int i, n, product = 1;
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
    printf("\nProduct = ");
    for (i = 0; i < n; i++)
    {
        product*=array[i];
        if (i == n-1)
            printf("%d = ", array[i]);
        else
            printf("%d X ", array[i]);
    }
    printf("%d", product);
    return 0;
}

//Ankit Chowdhury