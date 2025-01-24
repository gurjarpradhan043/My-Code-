#include <stdio.h>

int main() {
    int arr[10],i,se,f=0;
    //input elements 
   for(int i=1;i<=10;i++) {
    printf("Enter element : %d ",i);
    scanf("%d",&arr[i]);
   }
   //input element to search 
    printf("Enter element to search : ");
    scanf("%d",&se);

    //search for the element 
    for(i=1;i<=10;i++) {
        if(arr[i] == se) {
            printf("Element %d found at  index %d",se,i);
            f =1;
            break;
        }
    }
    if(f == 0) {
        printf("Element %d not found in the array\n",se);
    }
    return 0;
}