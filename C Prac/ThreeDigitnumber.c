//wap to make three digit number 

#include<stdio.h>
int main() {
    int a,b,c,ans;

    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);

    ans = a * 100 + b * 10 + c * 1;
    printf("three digit number is : %d ", ans);
    
    return 0;
}