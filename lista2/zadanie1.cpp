#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int thelowest(std::vector <int> v)
{
    if(v.size()==0)
    {
        return INT_MIN;
    }
    else
    {
        return *std::min_element(v.begin(),v.end());
    }
    
}

int main()
{
    std::vector <int> a = {1,2,3,4,5};
    std::cout<<thelowest(a)<<std::endl;
    std::vector <int> b = {};
    std::cout<<thelowest(b)<<std::endl;
    std::vector <int> c = {500,2,1000,4,7};
    std::cout<<thelowest(c)<<std::endl;
    return 0;
}