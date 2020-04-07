#include <iostream>
#include <string.h>

void kopiuj(char* dokad,const char* skad)
{
    while(*dokad++= *skad++)
        continue;
}
int main()
{
    char bufor[200];
    kopiuj (bufor,"Ala ma kota");
    std::cout<< "tekst '" << bufor << "' ma dlugosc " << strlen(bufor)<< "\n";
}

//a Najwyzszy priorytet ma  ++, potem *, a nanizszy =
//b zwiększa adres o 1 w wyniku czego odwołuje się do nastpnej komorki w charze.
//c dereferencja wyciąga wartość spod adresu
//d przypisuje do poszczegolnej komorki bufora adres komorki tekstu (zwraca wartośc adresu)
//e Wtedy wszystko ma wartość true, oprocz 0(lub NULL), wtedy ma wartosc false (w tym przypadku dzieje się to wtedy gdy adres skad wskaze ostatnia wartosc char czyli 0 )
