#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item item1,item2,item3;
    while (std::cin >> item1>>item2>>item3)
    {
        std::cout << item1+item2+item3 << std::endl;
    }
    return 0;
}