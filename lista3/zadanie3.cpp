#include <iostream>
#include <ctime>
#include <list>
int main()
{
    std::clock_t start;
    unsigned N = 10000; //8600000 zeby wykonywalo sie ok. sekunde
    start = std::clock();
    for (unsigned n=1;n<=N;++n)
    {
        int* p = new int[n]; //tworzy wskaznik do zarezerowanego miejsca w pamieci
        delete [] p;// niszczy zarezerowane miejsce w pamieci
    }
    std::cout<<( std::clock() - start ) / (double) CLOCKS_PER_SEC<<"\n";
    start = std::clock();
    for (unsigned n=1;n<=N;++n)
    {
        //nie za bardzo rozumiem o co chodziło dokładnie doktorowi Kozie z porownaniem kosztu "pojedynczego dodawania" (przeczytałem rozdział 4)
        
        std::list <int> p(n); //ale moze o to
    }
    std::cout<<( std::clock() - start ) / (double) CLOCKS_PER_SEC<<"\n";
    //z tego wychodzi ze koszt pary new/delete jest 10^4 razy mniejszy od pojedynczego dodawania.
}