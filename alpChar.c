#include <stdio.h>
int main() {
    int row;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    for(int i=0;i<=5;i++) {
        for(int j=0;j<=i;j++) {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}