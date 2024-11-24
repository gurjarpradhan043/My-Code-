#include <stdio.h>
int main() {
    int a,b,temp;
    printf("Enter value of a and b: ");
    scanf("%d %d ",&a,&b);
    printf("before swaping\n value of a is: %d\n value of b is: %d\n", a,b);
    temp = a;
    a = b;
    b = temp;
    printf("after swaping value of a is: %d\n after swaping value of b is: %d",a,b);
    return 0;
}