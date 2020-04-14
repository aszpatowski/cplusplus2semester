#include "wektor.h"                  // wlaczenie interfejsu klasy

void Wektor::operator= (Wektor const& wek)
{
    if (this == &wek)                // czy kopiujemy obiekt na samego siebie?
        return;
       
    delete [] _ptab;                 // zwolnienie pamieci

    _rozmiar = wek._rozmiar;         // skopiowanie rozmiaru
    _ptab = new int [_rozmiar];      // zarezerwowanie nowej pamieci
    
    for (size_t i = 0; i < _rozmiar; i++)  // skopiowanie danych
        {
            _ptab[i] = 0; // Kazdy inicjalizowany wektor ma na poczatku wartosci 0.(to zostalo poprawione)
        }
}
