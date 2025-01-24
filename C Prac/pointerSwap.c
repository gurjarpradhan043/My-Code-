#include<stdio.h>
int swap(int*a,int*b) { 
    int temp;
    int a,b;
    int temp = a;
    int a = b;
    int b = temp;
    return a,b;
    
}
int mian() {
      int swaped =  swap(5,6);
       printf("%d %d",swaped);
    return 0;
}