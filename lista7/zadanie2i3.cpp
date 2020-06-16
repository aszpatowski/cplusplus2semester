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
   void soft(int r);
   PPMimage(PPMimage const&);             
   
private:
   void operator= (PPMimage const& ) { }     // nie wywoluj tej funkcji!
   
   int     _szerokosc; // ilosc kolumn w obrazku
   int     _wysokosc;  // ilosc wierszy w obrazku
   int     _glebia;    // glebia koloru
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
   _tab = new Kolor* [_wysokosc];       // przydzial pamieci dla adresów wierszy
   for (int i = 0; i < _wysokosc; i++)
   {
      _tab[i] = new Kolor [_szerokosc];  // przydzial pamieci dla i-tego wiersza
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
      F.write(adres, 3 * _szerokosc);
   }
}

void PPMimage::grey(const char nazwa_pliku[]) //zadanie 2
{
   std::ofstream F(nazwa_pliku, std::ios::binary);
   char* adres = new char[_szerokosc];
   int grey_color;
   F << "P5\n" << _szerokosc << " " << _wysokosc << "\n" << _glebia << "\n";
   for (int i = 0; i < _wysokosc; ++i)
   {
      for (int j = 0; j < _szerokosc; ++j)
      {
         grey_color = (_tab[i][j].green + _tab[i][j].red + _tab[i][j].blue)/3; //srednia arytmetyczna z R, G i B
         adres[j] = grey_color ;
         
      }
      F.write(adres,_szerokosc);
      //std::cout<<adres<<"\t"<<_szerokosc<<"\n";
   }
}
void PPMimage::soft(int r) //zadanie 3, r to stopień wygladzenia
{
   PPMimage kopia(*this);  
   int rr = r*r;
   for (int y = 0; y < _wysokosc; ++y)
   {
      for (int x = 0; x < _szerokosc; ++x)
      {
         double mianownik = 0;
         int red = 0, green = 0, blue = 0;
         for (int dx = -r; dx <= r; ++dx)
         { 
            int nx = x + dx;
            if (nx < 0 || nx >= _szerokosc)
               continue;
            for (int dy = -r; dy <= r; ++dy)   
            {
               int ny = y + dy;
               if (ny < 0 || ny >= _wysokosc)
                  continue;
               if (dx*dx + dy*dy > rr)
                  continue;
               mianownik++;
               red   += kopia._tab[ny][nx].red;
               green += kopia._tab[ny][nx].green;
               blue  += kopia._tab[ny][nx].blue;
            }
         }
         std::cout<<mianownik<<"\n";
         _tab[y][x].red = char(red / mianownik);
         _tab[y][x].green = char(green / mianownik);
         _tab[y][x].blue = char(blue / mianownik);
      }  
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
   image.grey("grey.pgm");
   image.soft(10);
   image.zapisz("cosmossoft2.ppm");
}
