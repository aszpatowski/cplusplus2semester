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
    Stos stos12;
    std::cout<<std::endl;
    Stos stos3(stos12);
    //Stos stos3 = stos12;
    std::cout<<std::endl;
    std::cout<<"Stos2"<<std::endl;
    while (!stos2.empty())
    {
        std::cout << stos2.top() << " ";
        stos2.pop();
    }

    std::cout<<std::endl;
    std::cout<<"stos3";
    std::cout<<std::endl;
    stos3.reverse();

    std::cout<<std::endl;

    return 0;
}
