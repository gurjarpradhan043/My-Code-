#include <stdio.h>
int main() {
    int i,j,rows;
    

    printf("Enter numbers of rows ");
    scanf("%d",&rows);

    for(int i=0;i<=rows;i++) {
        for(int j=0;j<=i;j++) {
            printf("%c",'A'+j );
        }

        printf("\n");
    }
}