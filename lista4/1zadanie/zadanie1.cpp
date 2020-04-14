#include <iostream>
#include "wektor.h"

int main()
{
    Wektor v(10);
    std::cout << v.size() << "\n";
    for(int i =0; i<v.size();i++)
    {
        std::cout << v[i] << std::endl;
    }
    
}
// Wszystkie jego elementy mają wartość: 0