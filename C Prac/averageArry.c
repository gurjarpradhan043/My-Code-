#include <stdio.h>
int main()
{
    int i, n, arr[100], sum = 0,avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // for loop for input array
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements of the array: ");
        scanf("%d", &arr[i]);
    }

    // for loop for sum
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    // for  average
    avg = sum/n;
    printf("Sum = %d\t Average = %d\n", sum, avg);

    return 0;
}