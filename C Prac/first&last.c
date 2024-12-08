#include <stdio.h>
int main() {
    int a,first_digit ,last_digit , sum;
    printf("Enter a four digit number: ");
    scanf("%d",&a);
    first_digit = a%10;
    last_digit = a%100;
    printf("Sum of first and last digit of given four digit numbers is : %d", sum = first_digit + last_digit);

}  