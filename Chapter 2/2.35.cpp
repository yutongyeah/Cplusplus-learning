#include <iostream>
int main(){
    const int i = 42;       
    auto j = i;            
    auto &k = i;            
    auto p = &i;            
    const auto j2 = i, &k2 = i; 
    std::cout << "i:" << typeid(i).name() << "; j:" << typeid(j).name() << "; k:" << typeid(k).name() << "; p:" << typeid(j2).name() << "; k2:" << typeid(k2).name();
    //const int
}