#include <iostream>
#include <math.h>
 
using namespace std;

void a(int n)
{
    cout<<"A)"<<endl;
    long double result=0,a = 1;
    for(int j=1;j<=n;j++)
    {
        if(j%2==1)
        {
            result+=a/double(2*j-1);
        }
        else
        {
            result+=-a/double(2*j-1);
        }
    }
    cout.precision(30);
    cout<<M_PI<<endl;
    cout<<4*result<<endl;
    cout<<"Roznica: "<<M_PI-(4*result)<<"\n\n\n";
}
void b(int n)
{
    // Wzór wallisa
    cout<<"B)"<<endl;
    long double result=1,licznik,mianownik;
    for(double j=1;j<=n;j++)
    {
        licznik = 4*j*j;
        mianownik =licznik-1;
        result*=licznik/mianownik;
    }
    cout.precision(30);
    cout<<M_PI<<endl;
    cout<<2*result<<endl;
    cout<<"Roznica: "<<M_PI-(2*result)<<"\n\n\n";
}
void c(int n)
{
    cout<<"C)"<<endl;
    long double result=0,mianownik;
    for(double j=1;j<=n;j++)
    {
        mianownik = (2*j-1)*(2*j-1);
        result+=1/mianownik;
    }
    result =sqrt(8*result);
    cout.precision(30);
    cout<<M_PI<<endl;
    cout<<result<<endl;
    cout<<"Roznica: "<<M_PI-result<<"\n\n\n";
}
int main()
{
    a(1000000);
    b(1000000);
    c(1000000);
    return 0;
}
