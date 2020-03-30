#include <iostream>
#include <climits>

unsigned silnia(unsigned n)
{
    if(n==0)
        return 1;
    else
        return n* silnia(n-1);
    
}
int main()
{
    unsigned g = -1;
    //std::cout<<silnia(-1)<<"\n"; Wywołuje naruszenie pamięci(zbyt duza liczba).
    std::cout<<g<<"\n";
    std::cout<<INT_MAX<<"\n";
    //Dzieje się tak ponieważ, unsigned to taki int, ktory moze byc tylko dodatni. Zmienia się tutaj znaczenie najstarszego bita pamieci
    //111111....1 binarnie oznacza w incie -1(bo 2^31-(2^30+2^29...2^0)), natomiast w unsigned 2^31 + 2^30+2^29....+2^0.
}