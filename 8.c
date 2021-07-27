//Write a program to count the number of odd and even numbers in an array.

//Write a program to print all the odd numbers in an array

#include <stdio.h>

int main()
{
    int i, n, count_odd = 0, count_even = 0;
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
    for (i = 0; i < n; i++)
    {
        if (array[i]%2 != 0)
            count_odd++;
        if (array[i]%2 == 0)
            count_even++;
    }
    printf("\nNumber of odd elements: %d", count_odd);
    printf("\nNumber of even elements: %d", count_even);
    return 0;
}

//Ankit Chowdhury