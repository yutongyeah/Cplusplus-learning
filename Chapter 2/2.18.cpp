#include <iostream>
int main(){
    int i =20;
    int j = 10; 
    int* p = &i; 
    std::cout << "p = " << p << std::endl;   
    p = &j; 
    std::cout << "p = " << p << std::endl;   
    *p = 5;
    std::cout << "p = "<< p << " *p = " << *p << "  i = " << i  << "  j = " << j << std::endl;       
    // *p = 5  i = 20  j = 5
}