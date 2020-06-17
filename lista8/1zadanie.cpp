#define N 10
//#define KWADRAT(x) x*x jesli był kwadrat(10+2) to interpretowało to jako: 10+2*10+2
#define KWADRAT(x) (x)*(x) /* teraz jako (10+2)*(10+2), czyli poprawnie*/
#define PISZ(x) std::cout << #x " = " << x << "\n"
#include <iostream>
int main()
{
    std::cout << N << std::endl;
    std::cout << KWADRAT(10+2) << std::endl;
    int a = 10;
    PISZ(a+1);
    return 0;
}