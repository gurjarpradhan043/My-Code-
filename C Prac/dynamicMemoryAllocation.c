//wap to create an integer array of to 10 integers using dynamic memory collection
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;


    arr = (int *)malloc(10 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }


    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }


    printf("The entered integers are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
