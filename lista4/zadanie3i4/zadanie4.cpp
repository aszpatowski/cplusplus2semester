#include <iostream>
#include "random.h"
#include <algorithm>

int main()
{
    const int rozmiar = 1000; 
    double lista[rozmiar];
    Random rnd;
    for(int i = 0; i < rozmiar; i++)
    {
        lista[i] = rnd();
        std::cout << lista[i]<< "\n";
    }
    std::cout << "\n\n";
    std::sort(lista,lista + rozmiar);

    for(int i = 0; i < rozmiar; i++)
    {
        std::cout << lista[i]<< "\n";
    }
}