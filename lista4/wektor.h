#include <cstdlib>     // <-- ¿eby kompilator rozpoznawa³ typ size_t

class Wektor
{
private:
    size_t _rozmiar;
    int *  _ptab;
public:
    Wektor(size_t n);                // <-- deklaracja metody
    ~Wektor()                        { delete [] _ptab; }
      
    size_t size() const              { return _rozmiar; }
    int &  operator [](int n)        { return _ptab[n]; }
    int    operator [](int n) const  { return _ptab[n]; }
    
    void   operator= (Wektor const& wek);  // <-- deklaracja metody
};

inline Wektor::Wektor(size_t n)
: _rozmiar(n), _ptab(new int[n])
{ }
