#include <iostream>
#include <vector>

double (*A) [100]; //A)

char *B[5][5]; //B

char *C[]={};//C

std::vector<void*> D; //D

std::vector <double> E[4]; //E

double(*F_wskaznik) (double[],int); //F

int x = 10;

int *p =&x;

int G(int &p)
{
    return 2*p; //G CHYBA
}

int main()
{
    std::cout<<G(*p)<<"\n";
}