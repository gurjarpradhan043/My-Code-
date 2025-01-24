#include <malloc.h>
#include <stdio.h>
int main() {
    int *arr,i;
    arr = (int*)malloc(sizeof(int)*10);
    for(int i=0;i<10;i++) {
        printf("Enter an integer value : ");
        scanf("%d",(arr + i));
    }
    for(i=0;i<10;i++) {
        printf("%d\t ",*(arr + i));
    }
    return 0;
}
