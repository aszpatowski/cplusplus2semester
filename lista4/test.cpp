#include <iostream>
#include <string>

class pracownik
{
public:
    std::string imie;
    std::string nazwisko;
    int rok_urodzenia; 
};
std::ostream& operator << (std::ostream& F,class pracownik const &pracownik)
{
    F << pracownik.imie << "\t" << pracownik.nazwisko << "\n\n"
    << "Rok urodzenia:\t"<< pracownik.rok_urodzenia; 
    return F;
};


int main()
{
    pracownik prac = {"Janusz", "Traczyk", 1977};

    std::cout << prac << "\n";
}