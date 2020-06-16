# cplusplus2semester
lista 8
1 zadanie
 - #define N = 10; - powinno być:  #define N 10
 - #define KWADRAT(x) x*x - powinno być:  #define KWADRAT(x) (x*x)
 - #define PISZ(x) std::cout << #x <<"= " << x << <<"\n"  - powinno być:  #define PISZ(x) std::cout << "x" <<" = " << x << <<"\n"
 choć poprzednia wersja też działa aczkolwiek wypisuje liczba = liczba (np. PISZ(10) wynik to "10 = 10")