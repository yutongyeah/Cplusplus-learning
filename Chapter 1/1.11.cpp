#include <iostream>
int main(){
    int v1, v2,i;
    std::cout << "Please enter two integers: ";
    std::cin >> v1 >> v2 ;
    if (v1<v2)
    {
        i = v1;
        if (v2-v1<=1)
        {
            std::cout << "There is no integer between them. ";
        }
        else
        {
            std::cout << "Integers between them are: ";
            while (i<v2-1)
            {
                i++;
                std::cout << i<<" ";
            }
            
        }
        
    }
    else if (v1>v2)
    {
        
        i = v2;
        if (v1-v2<=1)
        {
            std::cout << "There is no integer between them. ";
        }
        else
        {
            std::cout << "Integers between them are: ";
            while (i<v1-1)
            {
                i++;
                std::cout << i<<" ";
            }
        }
        
        
    }
    else
    {
        std::cout << "There is no integer between them. ";
    }
    
}