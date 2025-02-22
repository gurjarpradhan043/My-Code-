#include<iostream>
int main() {
    int temp;
    int a = 5;
    int b = 6;
    std::cout << "before swaping a = %d and b = %d",a , b;
     temp = a;
      a = b;
      b = temp;
    std::cout << "after swaping a = %d and b = %d ",a,b;
    return 0;
}