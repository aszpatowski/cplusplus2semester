#include <iostream>
template <typename T>
T suma(const T c[],unsigned N)
{
    T temp = 0;
    for (size_t i=0;i<N;i++)
    {
        temp+= c[i];
    }  
    return temp;
}
int main()
{
    const unsigned n = 20;
    int Tablica[n] = {1,2,3,4,5,6};
    std::cout<<suma(Tablica, n)<<"\n";
    const unsigned g = 15;
    double Tab[g] = {-100,2.5,7,17,3.14444,4};
    std::cout<<suma(Tab, g)<<"\n";
    return 0;
}