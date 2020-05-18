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
    if(_size!=0) //aby się nie sypało przy kopiowaniu stosu pustego
    {
        _pSzczyt = new Ogniwo(rhs.top(), nullptr);
        Ogniwo * temp = rhs._pSzczyt;
        Ogniwo * cover = _pSzczyt;
        for (size_t i = 0; i < _size-1; i++) // _size -1 poniewaz gore przypisujemy recznie.
        {
            temp = temp->_p_nastepny;

            _pSzczyt ->_p_nastepny = new Ogniwo(temp->_dane,nullptr); //dodane nullprt wg zaleceń podanych na zajeciach

            _pSzczyt = _pSzczyt->_p_nastepny;
        }
        _pSzczyt->_p_nastepny = nullptr;
        _pSzczyt = cover;
    }
    else
    {
        _pSzczyt = nullptr;
    }

}


Stos& Stos::operator=(Stos const& rhs)
{
	if(rhs._size!=0)
    {
        
        if (this == &rhs)
            return *this;
        
        _pSzczyt = new Ogniwo(rhs.top(), nullptr);
        Ogniwo * temp = rhs._pSzczyt;
        Ogniwo * cover = _pSzczyt;
        for (size_t i = 0; i < _size-1; i++) // _size -1 poniewaz gore przypisujemy recznie.
        {
            temp = temp->_p_nastepny;

            _pSzczyt ->_p_nastepny = new Ogniwo(temp->_dane,nullptr); //dodane nullprt wg zaleceń podanych na zajeciach

            _pSzczyt = _pSzczyt->_p_nastepny;
        }
        _pSzczyt->_p_nastepny = nullptr;
        _pSzczyt = cover;
        return *this;
    }
    else
    {
        _pSzczyt = nullptr;
        return *this;
    }
    
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

//ZADANIE 4

void Stos::reverse()
{
    if(_size>1) //poprawione, nie wywoluje zadnego efektu przy stosach 0 i 1 elementowych.
    {
    Ogniwo *temp2 = _pSzczyt;
    Ogniwo *temp1 = nullptr;
    Ogniwo *temp3 = nullptr;
    while (temp2 != NULL)
    {
        temp3 = temp2->_p_nastepny;

        temp2->_p_nastepny = temp1;

		temp1 = temp2;
        
		temp2 = temp3;
	}
	_pSzczyt = temp1;
    }
}
