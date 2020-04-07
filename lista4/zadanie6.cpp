#include <iostream>

class X
{
private:
    int _x;
public:
    X (int arg) : _x(arg){}
};

std::ostream& operator << (std::ostream &F, X const & arg)
{
    return F << arg;
}
int main()
{
    X x(10);
    std::cout << x << "\n";
}