//Write a program to find the sum and average of the elements of an array

#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    float avg;
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
    printf("\nSum = ");
    for (i = 0; i < n; i++)
    {
        sum+=array[i];
        if (i == n-1)
            printf("%d = ", array[i]);
        else
            printf("%d + ", array[i]);
    }
    printf("%d", sum);
    avg = (float)sum / n;
    printf("\nAverage = (%d / %d) = %.2f", sum, n, avg);
    return 0;
}

//Ankit Chowdhury