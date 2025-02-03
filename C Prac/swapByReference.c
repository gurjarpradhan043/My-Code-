// wap to swap the two number using call by reference
#include <stdio.h>

void swapByReference(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    swapByReference(&a, &b);
    printf("After swap (in main): a = %d, b = %d\n", a, b);
    
    return 0;
}
