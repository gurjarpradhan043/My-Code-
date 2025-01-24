#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int largest = INT_MIN, second_largest = INT_MIN;

    printf("Enter the size of the array (at least 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Error: Array must have at least two elements\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        printf("There is no second largest number; all elements might be the same\n");
    } else {
        printf("The second largest number is: %d\n", second_largest);
    }

    return 0;
}
