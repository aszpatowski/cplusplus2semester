#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

class PPMimage
{
public:
   struct Kolor { unsigned char red, green, blue; };

   PPMimage (const char nazwa_pliku[]);      // wczytuje obraz z pliku
   ~PPMimage();
   void zapisz(const char nazwa_pliku[]);    // zapisuje obraz w pliku
   void grey(const char nazwa_pliku[]);
   PPMimage(PPMimage const&);             
   
private:
   void operator= (PPMimage const& ) { }     // nie wywo³uj tej funkcji!
   
   int     _szerokosc; // ilosc kolumn w obrazku
   int     _wysokosc;  // ilosc wierszy w obrazku
   int     _glebia;    // glêbia koloru
   Kolor** _tab;       // adres dwuwymiarowej tablicy kolorów
};

PPMimage::PPMimage(const char nazwa_pliku[])
{
   std::ifstream F(nazwa_pliku, std::ios::binary); // '\n' zajmuje 1 bajt!
   std::string s;                // zmienna pomocnicza
   F >> s >> std::ws;            // teraz s powinno miec wartosc "P6"
   while(F.peek() == '#')        // pominiêcie ewentualnych komentarzy
      F.ignore(100000, '\n');
   F >> _szerokosc >> _wysokosc >> _glebia;         //wczytanie parametrów obrazu
   F.ignore(100000,'\n');            // pominiêcie bajtów do znaku '\n' wlacznie
   _tab = new Kolor* [_wysokosc];       // przydzia³ pamiêci dla adresów wierszy
   for (int i = 0; i < _wysokosc; i++)
   {
      _tab[i] = new Kolor [_szerokosc];  // przydzia³ pamiêci dla i-tego wiersza
      char* adres = reinterpret_cast<char*>(_tab[i]);   // zmiana typu wskaznika
      F.read(adres , sizeof(Kolor) * _szerokosc);    // wczytanie i-tego wiersza
   }
}


PPMimage::PPMimage(PPMimage const& rhs)
: _szerokosc (rhs._szerokosc), 
  _wysokosc  (rhs._wysokosc), 
  _glebia    (rhs._glebia),
  _tab       (0)
{
   _tab = new Kolor* [_wysokosc];       
   for (int i = 0; i < _wysokosc; i++)
   {
      _tab[i] = new Kolor [_szerokosc]; 
      for (int j = 0; j < _szerokosc; ++j)
         _tab[i][j] = rhs._tab[i][j];
   }
}

void PPMimage::zapisz(const char nazwa_pliku[])
{
   std::ofstream F(nazwa_pliku, std::ios::binary);
   F << "P6\n" << _szerokosc << " " << _wysokosc << "\n" << _glebia << "\n";
   for (int i = 0; i < _wysokosc; ++i)
   {
      const char* adres = reinterpret_cast<char*>(_tab[i]);
      //std::cout<<adres<<"\t"<<_szerokosc<<"\n";
      std::cout<<adres<<"\n";
      F.write(adres, 3 * _szerokosc);
   }
}

void PPMimage::grey(const char nazwa_pliku[])
{
   std::ofstream F(nazwa_pliku, std::ios::binary);
   F << "P2\n" << _szerokosc << " " << _wysokosc << "\n" << _glebia << "\n";
   for (int i = 0; i < _wysokosc; ++i)
   {
      const char* adres = reinterpret_cast<char*>(_tab[i]);
      //std::cout<<adres<<"\t"<<_szerokosc<<"\n";
      F.write(adres, 3 * _szerokosc);
   }
}


PPMimage::~PPMimage()
{
   for (int i = 0;i < _wysokosc; i++)
      delete [] _tab[i];
   delete [] _tab;
}


int main()
{
   PPMimage image("cosmos.ppm");
   //image.zapisz("cosmoselo.ppm");
   image.grey("miekki.ppm");
}
