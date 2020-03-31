#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void zeruj(std::vector <double>& v)
{
   for(int i =0;i<v.size();i++)
   {
       v[i]=0;
   }
}

int main()
{
    std::vector <double> a = {1,2,3,4,5};

    std::cout<<"\n\n a"<<std::endl;

    for(int i =0;i<a.size();i++)
    {
       std::cout<<a[i]<<std::endl;
    }

    zeruj(a);

    for(int i =0;i<a.size();i++)
    {
       std::cout<<a[i]<<std::endl;
    }


    std::vector <double> b = {};
    std::cout<<"\n\n b"<<std::endl;
    for(int i =0;i<b.size();i++)
    {
       std::cout<<b[i]<<std::endl;
    }
    zeruj(b);
    for(int i =0;i<b.size();i++)
    {
       std::cout<<b[i]<<std::endl;
    }
    std::vector <double> c = {500,2,1000,4,7};
    std::cout<<"\n\n c"<<std::endl;

    for(int i =0;i<c.size();i++)
    {
       std::cout<<c[i]<<std::endl;
    }

    zeruj(c);
    
    for(int i =0;i<c.size();i++)
    {
       std::cout<<c[i]<<std::endl;
    }
    return 0;
}