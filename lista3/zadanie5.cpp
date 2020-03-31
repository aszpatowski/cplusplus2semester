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
}