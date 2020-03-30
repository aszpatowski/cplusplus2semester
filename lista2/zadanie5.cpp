#include <iostream>
#include <math.h>
#include <vector>
#include <cstdio>
#include <ctime>
int fibo1(int n)
{
    if(n<3) return 1;
    int f1=1,f2=1,temp;
    for(int i=0;i<n-2;i++)
    {
        temp = f1+f2;
        f1 =f2;
        f2=temp;
    }
    return f2;
}
int fibo2(int n)
{
    return (1/sqrt(5))*( pow(2/(sqrt(5)-1),n) - pow(-2/(sqrt(5)+1),n) )+1;
}
int fibo3(int n)
{
    const int rozmiar = 46;
    static std::vector<int> tab(rozmiar);
    tab[0] = 1;
    tab[1] = 1;
    for(int i=1;i<=n;i++)
    {
        tab[i]=tab[i-1]+tab[i-2];
    }
    return tab[n-1];
}
int main()
{
    std::clock_t start;
    double duration1,duration2,duration3;

    start = std::clock();

    std::cout<<"\nFibo1\n";
    for (int n = 0; n<48;n++)
    {
       std::cout<<fibo1(n)<<"\n"; 
    }

    duration1 = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

    


    start = std::clock();

    std::cout<<"\nFibo2\n";
    for (int n = 0; n<48;n++)
    {
       std::cout<<fibo2(n)<<"\n"; 
    }

    duration2 = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;



    start = std::clock();

    std::cout<<"\nFibo3\n";
    for (int n = 0; n<48;n++)
    {
       std::cout<<fibo3(n)<<"\n"; 
    }

    duration3 = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout<<"time fibo1: "<< duration1 <<'\n';
    std::cout<<"time fibo2: "<< duration2 <<'\n';
    std::cout<<"time fibo3: "<< duration3 <<'\n';
    
}