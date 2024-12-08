#include <stdio.h>

int main() {
    int arr[10], i, Se, f = 0;

    // Input elements into the array
    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    printf("Enter the element to search: ");
    scanf("%d", &Se);

    // Perform linear search
    for (i = 0; i < 10; i++) {
        if (arr[i] == Se) {
            printf("Element %d found at index %d\n", Se, i);
            f = 1;
            break;
        }
    }

    if (f == 0) {
        printf("Element %d not found in the array\n", Se);
    }

    return 0;
}
