#include <iostream>

/*class Samochod
{
public:
    Samochod (int n)
    : _kola(n), _sruby(4*_kola)
    {
        std::cout << "Samochod z" << _kola << "kolami i"
            <<_sruby << "srubami\n";
    }
private:
    int _sruby;
    int _kola;
};  *///Wersja oryginalna

//Błąd przy kompilacji z opcją -W -Wall

/*
zadanie5.cpp: In constructor ‘Samochod::Samochod(int)’:
zadanie5.cpp:14:9: warning: ‘Samochod::_kola’ will be initialized after [-Wreorder]
     int _kola;
         ^~~~~
zadanie5.cpp:13:9: warning:   ‘int Samochod::_sruby’ [-Wreorder]
     int _sruby;
         ^~~~~~
zadanie5.cpp:6:5: warning:   when initialized here [-Wreorder]
     Samochod (int n)
     ^~~~~~~~
*/
/*class Samochod
{
private:
    int _kola;
    int _sruby;    
public:
    Samochod (int n)
    : _kola(n), _sruby(4*_kola)
    {
        std::cout << "Samochod z" << _kola << "kolami i"
            <<_sruby << "srubami\n";
    }
};*/
//1 metoda private na poczatek i zamiana kolejnosci definiowania kola i sruby;

class Samochod
{
public:
    Samochod (int n)
    : _kola(n), _sruby(4*n)
    {
        std::cout << "Samochod z " << _kola << " kolami i"
            <<_sruby << " srubami\n";
    }
private:
    int _sruby;
    int _kola;
};
//2 metoda w argumentach fuknkcji sruby nie dajemy _kola*4, tylko 4*n.
int main()
{
    Samochod s4 (4);
    Samochod s12 (12);
}