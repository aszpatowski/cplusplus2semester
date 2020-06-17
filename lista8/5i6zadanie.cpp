#include <vector>
#include <iostream>

template<typename T>
void zamien(T & x, T & y)
{
   T temp (x);
   x = y;
   y = temp;
}

template<typename T>
void zamien2(std::vector<T> & x, std::vector<T> & y)
{
   x.swap(y);
}


int main()
{
   std::vector<double> v, w;
   v.assign(2,7);
   w.assign(3,4);
   std::cout << v[0] << std::endl;
   std::cout << w[0] << std::endl;
   zamien(v,w);
   std::cout << v[0] << std::endl;
   std::cout << w[0] << std::endl;
   zamien2(v,w);
   std::cout << v[0] << std::endl;
   std::cout << w[0] << std::endl;
}
