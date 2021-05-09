#include <iostream>
int main(){
    int val = 50,sum=0;
    while (val<101)
    {
        sum += val;
        val++;
    }
    std::cout << sum;
}