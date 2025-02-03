//wap to swap the two number using call by value and  
#include <stdio.h>

void swapByValue(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    
    printf("Inside swapByValue function: x = %d, y = %d\n", x, y);
}

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    swapByValue(a, b);
    printf("After swap (in main): a = %d, b = %d\n", a, b);
    
    return 0;
}
