#include <iostream>
int main(){
    int v1, v2;
    std::cout << "Please enter two integers: ";
    std::cin >> v1 >> v2 ;
    if (v1<v2)
    {
        if (v2-v1<=1)
        {
            std::cout << "There is no integer between them. ";
        }
        else
        {
            std::cout << "Integers between them are: ";
            for (int i = v1; i<v2-1; i++)
            {
                std::cout << i+1<<" ";
            }
        }
        
    }
    else if (v1>v2)
    {
        if (v1-v2<=1)
        {
            std::cout << "There is no integer between them. ";
        }
        else
        {
            std::cout << "Integers between them are: ";
            for (int i = v2; i<v1-1; i++)
            {
                std::cout << i+1<<" ";
            }
        }
        
        
    }
    else
    {
        std::cout << "There is no integer between them. ";
    }
    
}