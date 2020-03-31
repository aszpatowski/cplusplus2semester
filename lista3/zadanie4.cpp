#include <iostream>

int main()
{
    double tab[10];
    double y;
    double x;
    x=10;
    std::cout << &x << "\t" << &tab[-1] << "\n";
    //Podaje adres w pamięci ostatnio zdefiniowanego obiektu
    std::cout << &y << "\t" << &tab[-2] << "\n";
    //Podaje adres w pamięci przedostatnio zdefiniowanego obiektu
    //i tak dalej...
}