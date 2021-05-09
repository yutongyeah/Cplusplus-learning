#include <iostream>
int main(){
    int i = 42; 
    int * pl = &i; 
    *pl = *pl * *pl;      
    std::cout << *pl;
    //42^2
}