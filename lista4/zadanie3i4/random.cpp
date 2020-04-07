#include <iostream>
#include "random.h"


int main()
{
    Random rnd;
    for(int i = 0; i < 20; i++)
       std::cout << rnd() << "\n";
       //działa
}
