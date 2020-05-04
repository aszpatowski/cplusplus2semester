#include <cassert>
#include "stos.h"
#include <iostream>
Stos::~Stos()
{
    while ( !this->empty() )
        this->pop();
}
// ZADANIE 2
Stos::Stos(Stos const& rhs)
:_size(rhs._size)
{
    if(_size!=0)
    {

        _pSzczyt = new Ogniwo(rhs.top(), 0);
        Ogniwo * temp = rhs._pSzczyt;
        Ogniwo * cover = _pSzczyt;
        for (size_t i = 0; i < _size-1; i++) // _size -1 poniewaz gore przypisujemy recznie.
        {
            temp = temp->_p_nastepny;

            _pSzczyt ->_p_nastepny = new Ogniwo(temp->_dane,_pSzczyt->_p_nastepny);

            _pSzczyt = _pSzczyt->_p_nastepny;
        }
        _pSzczyt->_p_nastepny = 0;
        _pSzczyt = cover;
    }

}


Stos& Stos::operator=(Stos const& rhs)
{
	if (this == &rhs)
        return *this;
  	