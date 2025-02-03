//wap to print largest amoung two numbers using conditional ternary oprator
#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int largest = (num1 > num2) ? num1 : num2;
    
    printf("The largest number is: %d\n", largest);
    
    return 0;
}
