#include <stdio.h>
int main() {
    int numb1,numb2,numb3,newNumber;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &numb1,&numb2,&numb3);
    printf("The formed number is: %d", newNumber = numb1*100 + numb2*10 + numb3 );
    return 0;
}