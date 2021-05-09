#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item item1,item2;
    while (std::cin >> item1>>item2)
    {
        if (item1.isbn==item2.isbn)
        {
            std::cout << item1+item2 << std::endl;
        }
        else
        {
            std::cout << item1<< std::endl;
            std::cout << item2 << std::endl;
        }
    }
    return 0;
}