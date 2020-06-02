#include <iostream>
#include <string>
#include <sstream>

int char_to_int(char bufor [])
{
    std::stringstream str(bufor);
    int back_int;
    str >> back_int;
    return back_int;
}

int main()
{
    char bufor[]="12345";
    std::cout << "typ char na int:  " << char_to_int(bufor)<<"\n";
    char bufor1[]="58943t9-";
    std::cout << "typ char na int:  " << char_to_int(bufor1)<<"\n"; //kończy na pierwszym nie rozpoznamym znaku

}