#include <iostream>


int main()
{
    int x =1;
    int y =x++; //przypisuje y wartosc przed inkrementacja x, wiec w tej linii y=1 x=2
    int z = --y+x; //dekrementuje najpierw y, więc y = 0 dodać x = 2, wiec z = 2
    int v = z+=2; // dodaje do zmiennej 'z' 2, a nastepnie przypisuje do zmiennej v wartosc zmiennej z, wiec w tej linii v = 4, z =4 
    std::cout<<"x="<<x<<"\n";
    std::cout<<"y="<<y<<"\n";
    std::cout<<"z="<<z<<"\n";
    std::cout<<"v="<<v<<"\n";
    return 0;
}