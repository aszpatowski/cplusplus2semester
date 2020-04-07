#include <iostream>
#include "Zespolona.h"

int main()
{
    Zespolona complex1 = {1,2};
    Zespolona complex2 = {1,5};
    std::cout <<complex1+complex2<<"\n";
    std::cout <<complex1-complex2<<"\n";
    std::cout <<complex1*complex2<<"\n";
    std::cout <<complex1/complex2<<"\n";
    Zespolona complex3;
    std::cin>>complex3;
    std::cout <<complex3<<"\n";
}