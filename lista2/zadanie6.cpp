#include <iostream>

int main(int argc,char *argv[])
{
    for(int i=1;i<argc;i++)//od 1 zeby nie wyswietlało sciezki pliku, tylko same argumenty
    {
        std::cout<<i<<". "<<argv[i]<<std::endl;
    }
}