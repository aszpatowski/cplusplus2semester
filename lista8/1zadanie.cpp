#define N 10
#define KWADRAT(x) (x*x)
#define PISZ(x) std::cout << #x <<" = " << x << "\n"
#include <iostream>
int main()
{
    std::cout << N << std::endl;
    std::cout << KWADRAT(10) << std::endl;
    PISZ(10);
    return 0;
}