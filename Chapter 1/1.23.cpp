#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item item1,item2,item3;
    std::cin >> item1 >> item2 >> item3;
    if (item1.isbn==item2.isbn&&item1.isbn==item3.isbn)
    {
        std::cout << item1.isbn<<": 3" << std::endl;
    }
    else if ((item1.isbn==item2.isbn&&item1.isbn!=item3.isbn)||(item1.isbn==item3.isbn&&item1.isbn!=item2.isbn))
    {
        std::cout << item1.isbn<<": 2" << std::endl;
        if (item1.isbn==item2.isbn&&item1.isbn!=item3.isbn)
        {
            std::cout << item3.isbn<<": 1" << std::endl;
        }
        else
        {
            std::cout << item2.isbn<<": 1" << std::endl;
        }
    }    
    else if(item1.isbn!=item2.isbn&&item1.isbn!=item3.isbn&&item2.isbn!=item3.isbn)
    {
        std::cout << item1.isbn << ": 1;" << item2.isbn << ": 1;" <<item3.isbn<<": 1" << std::endl;
    }
    else
    {
        std::cout << item1.isbn<<": 1" << std::endl;
        std::cout << item2.isbn<<": 2" << std::endl;
    }
    
    return 0;
}