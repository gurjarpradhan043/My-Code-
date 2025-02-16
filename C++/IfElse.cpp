#include<iostream>
int main() {
    std::cout << "It's Working"<<std::endl;
    int a;
    std::cout  << "Enter a number : ";
    std::cin >>a ;
    if(a%2==0) {
        std::cout << "This is an even number"<<std::endl;
    }else {
        std::cout << "This is an odd number"<<std::endl;
    }

    return 0;
}