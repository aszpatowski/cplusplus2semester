#define RANDOM_H__
#include<ctime>
#include<assert.h>

class Random
{
   private:
      int _fn;
   public:
      Random(int f1 = time(0));
      double operator()();           
   };

   inline Random::Random(int f1)
   :_fn(f1)
   { 
      assert( ( 0 < f1 ) && ( f1 < 2147483647 ) ); // poprawione, dodano asercje.
   }
   inline double Random::operator()()
   {
      long long m = _fn;
      m *= 16807;
      m %= 2147483647; // 2^31-1
      _fn = static_cast<int>(m);
      return m / 2147483646.0; //2^31-2
}

