#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item bk1,bk2;
    while (std::cin >> bk1>>bk2)
    {
        std::cout << bk1 << ";"<< bk2 << std::endl;
    }
    return 0;
}