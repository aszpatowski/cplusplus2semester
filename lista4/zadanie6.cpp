#include <iostream>

class X
{
  // friend std::ostream& operator << (std::ostream &F, X const & arg);
private:
    int _x;
public:
    X (int arg) : _x(arg){}
};

std::ostream& operator << (std::ostream &F, X const & arg)
{
    return F << arg; //powinno być arg._x
}
int main()
{
    X x(10);
    std::cout << x << "\n";
}