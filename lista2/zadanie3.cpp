#include <iostream>
#include <vector>
#include <climits>

double operator*(const std::vector<double>&v,const std::vector<double>&w)
{
    if (v.size()!=w.size())
    {
        return INT_MIN;
    }
    else
    {
        double scalar = 0;
        for(int i=0;v.size()>i;i++)
        {
            scalar+=v[i]*w[i];
        }
        return scalar;
    }
    
} 

int main()
{
    std::vector <double> a = {1,2,3,4,5};
    std::vector <double> b = {1,20,5,4,10};
    std::vector <double> c = {1,2,3,4};
    std::cout<<a*b<<std::endl;
    std::cout<<a*c<<std::endl;
    return 0;
}