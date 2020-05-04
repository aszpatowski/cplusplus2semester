#include <iostream>
#include "stos.h"

int main()
{
    Stos stos;

    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == i % 5)
            stos.push(i);
    }
    stos.push(0); 
    Stos stos2(stos);
    std::cout<<"stos1";
    std::cout<<std::endl;
    std::cout<<stos;
    while (!stos.empty())
    {
	std::cout << stos.top() << " ";
	stos.pop();
    }

    std::cout<<std::endl;
    Stos stos3 = stos2;
    std::cout<<std::endl;

    while (!stos2.empty())
    {
	std::cout << stos2.top() << " ";
	stos2.pop();
    }

    std::cout<<std::endl;
    std::cout<<"stos3";
    std::cout<<std::endl;
    std::cout<<stos3;
    stos3.reverse();
    std::cout<< stos3 << std::endl;

    std::cout<<std::endl;
    return 0;
}
