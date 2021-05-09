#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item item1,item2,item3;
    std::cin >> item1 >> item2 >> item3;
    if (item1.isbn==item2.isbn&&item1.isbn==item3.isbn)
    {
        std::cout << item1+item2+item3 << std::endl;
    }
    else if ((item1.isbn==item2.isbn&&item1.isbn!=item3.isbn)||(item1.isbn==item3.isbn&&item1.isbn!=item2.isbn))
    {
        if (item1.isbn==item2.isbn)
        {
            std::cout << item1+item2 << std::endl;
            std::cout << item3 << std::endl;
        }
        else
        {
            std::cout << item1+item3 << std::endl;
            std::cout << item2 << std::endl;
        }
    }    
    else if(item1.isbn!=item2.isbn&&item1.isbn!=item3.isbn&&item2.isbn!=item3.isbn)
    {
        std::cout << item1<< std::endl;
        std::cout << item2<< std::endl;
        std::cout << item3<< std::endl;
    }
    else
    {
        std::cout << item1<<": 1" << std::endl;
        std::cout << item2+item3<<": 2" << std::endl;
    }
    
    return 0;
}