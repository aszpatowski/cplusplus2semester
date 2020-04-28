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


Stos& Stos::operator=(Stos const& rhs)
{
	if (this == &rhs)
        return *this;
  	
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
    return *this;
}
//ZADANIE 3
std::ostream& operator <<(std::ostream& F, const Stos& stos)
{
    Ogniwo* temp = stos._pSzczyt;
    for (size_t i = 0; i < stos._size-1; i++)
    {
        F << temp->_dane << ", ";
		temp = temp->_p_nastepny;
    }
    F << temp->_dane << std::endl;
	temp = temp->_p_nastepny;
    return F;
}

