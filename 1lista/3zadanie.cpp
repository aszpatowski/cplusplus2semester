#include <iostream>
#include <math.h>
using namespace std;
void a(int n)
{
    long double ti=1/sqrt(3),tiplus,licznik;
    for(int i =0;i<=n;i++)
    {
        licznik = sqrt((ti*ti)+1)-1;
        tiplus = licznik/ti;
        cout.precision(30);
        cout<<"Dla i = "<<i<<" :  "<<(6*pow(2,i))*ti<<"\n";
        cout<<"\tRoznica: "<<M_PI-((6*pow(2,i))*ti)<<"\n";
        ti=tiplus;
    }
}
void b(int n)
{
    long double ti=1/sqrt(3),tiplus,mianownik;
    for(int i =0;i<=n;i++)
    {
        mianownik = sqrt((ti*ti)+1)+1;
        tiplus = ti/mianownik;
        cout.precision(30);
        cout<<"Dla i = "<<i<<" :  "<<(6*pow(2,i))*ti<<"\n";
        cout<<"\tRoznica: "<<M_PI-((6*pow(2,i))*ti)<<"\n";
        ti=tiplus;
    }
} 
int main()
{
    a(30);
    cout<<"\n\n";
    b(30);
    return 0;
}