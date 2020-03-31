#include <iostream>
#include <cstring>

int main()
{
    char haslo[8];
    strcpy(haslo,"Ta.jnE!");
    for ( ; ;)
    {
        std::cout <<"podaj haslo: ";
        char tmp[8];
        std::cin >> tmp;
        if (strcmp(tmp,haslo)==0)
            break;
        std::cout<<"przykro mi, haslo jest niepoprawne!\n";

    }
    std::cout << "witaj w systemie!\n";
}// Działa to na takiej samej zasadzie jak zadanie 4, powyzej 8 znakow zaczynaja się indexy -1, -2 ...
// odwołują się do miejsc w pamięci ostatnio zdefiniowanych zmiennych i je nadpisuje.
// Tutaj to jeszcze nie działa, ponieważ nie jest to opisane w standardzie jezyka i wynik zalezy od kompilatora.
// W pliku zadanie 6 jest poprawione i ten "trik" działa na moim kompilatorze.