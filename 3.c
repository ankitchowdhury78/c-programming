//Write a program to count the number of occurences of a number in an array

#include <stdio.h>

int main()
{
    int i, n, x, count = 0;
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
    printf("\n\nEnter element: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (array[i] == x)
            count++;
    }
    if (count == 0)
        printf("The element %d does not exist in the array.", x);
    else
        printf("The element %d appears %d time(s) in the array.", x, count);
    return 0;
}

//Ankit Chowdhury