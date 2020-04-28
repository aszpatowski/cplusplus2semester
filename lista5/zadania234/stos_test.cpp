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
    std::cout<<"stos2";
    std::cout<<std::endl;

    while (!stos2.empty())
    {
	std::cout << stos2.top() << " ";
	stos2.pop();
    }

    std::cout<<std::endl;
    std::cout<<"stos3";
    std::cout<<std::endl;

    while (!stos3.empty())
    {
	std::cout << stos3.top() << " ";
	stos3.pop();
    }

    std::cout<<std::endl;
}
