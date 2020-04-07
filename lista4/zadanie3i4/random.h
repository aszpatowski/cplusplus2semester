#ifndef RANDOM_H__
#define RANDOM_H__
#include<ctime>

class Random
{
private:
   int _fn;
public:
   Random(int f1 = time(0));
   double operator()();           
};

inline Random::Random(int f1)
: _fn(f1)
{ }

inline double Random::operator()()
{
   long long m = _fn;
   m *= 16807;
   m %= 2147483647;
   _fn = static_cast<int>(m);
   return m / 2147483646.0;
}
#endif
