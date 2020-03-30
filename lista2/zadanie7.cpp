#include <iostream>

int nwd(int x , int y)
{
    if(x==0 and y ==0) //powinno być 'or' albo rownoznaczne ||, ponieważ jesli tylko jedna zmienna rownie sie 0 to program się zapętla w nieskonczoność.  
        return -1;
    
    x = std::abs(x);
    y = std::abs(y);
    while(x!=y)
    {
        if(x>y)
        x-=y;
        else
            y-=x;
    }
    return x;
}

int main()
{
    std::cout<<nwd(0,15)<<std::endl;
    return 0;
}