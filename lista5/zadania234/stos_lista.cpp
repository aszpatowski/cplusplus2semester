#include <cassert>
#include "stos.h"

Stos::~Stos()
{
    while ( !this->empty() )
        this->pop();
}
Stos::Stos(Stos const& rhs)
: _size(rhs._size)
{
    for (size_t i = 0; i < _size; i++)
        _tab[i] = rhs._tab[i];
}

