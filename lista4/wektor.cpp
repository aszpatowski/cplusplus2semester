#include "wektor.h"                  // w��czenie interfejsu klasy

void Wektor::operator= (Wektor const& wek)
{
    if (this == &wek)                // czy kopiujemy obiekt na samego siebie?
        return;
       
    delete [] _ptab;                 // zwolnienie pami�ci
    _rozmiar = wek._rozmiar;         // skopiowanie rozmiaru
    _ptab = new int [_rozmiar];      // zarezerwowanie nowej pami�ci
    for (size_t i = 0; i < _rozmiar; i++)  // skopiowanie danych
        _ptab[i] = wek._ptab[i];
}
