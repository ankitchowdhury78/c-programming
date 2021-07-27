//Write a program to swap two elements as per user input.

#include <stdio.h>

int main()
{
    int i, n, num1, num2;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The entered array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nEnter the numbers you want to swap: ");
    scanf("%d %d", &num1, &num2);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == num1)
            array[i] = num2;
        else if (array[i] == num2)
            array[i] = num1;
    }
    printf("The array with the two elements swapped is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

//Ankit Chowdhury