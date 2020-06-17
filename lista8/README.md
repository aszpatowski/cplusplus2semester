# cplusplus2semester
lista 8

# 1 zadanie
 - #define N = 10; - powinno być:  #define N 10
 - #define KWADRAT(x) x*x - powinno być:  #define KWADRAT(x) (x)*(x)
 - #define PISZ(x) std::cout << #x <<"= " << x << <<"\n"  - powinno być:  #define PISZ(x) std::cout << "x" <<" = " << x << <<"\n"
 choć poprzednia wersja też działa aczkolwiek wypisuje liczba = liczba (np. PISZ(10) wynik to "10 = 10")

# 2 zadanie

template<typename T1, typename T2>
    inline pair<T1,T2>
    make_pair(T1 x, T2 y)
    {
        return pair <T1, T2> (x,y);
    }

- nazwy i kategorie parametrów szablonu - nazwe T1 i T2, a kategoria to typename
- nazwe funkcji - make_pair
- typ wartości funkcji (i sposób jej przekazania)
- liczbę i typy argumentów funkcji, a także sposób ich przekazywania
- treść funkcji
- koniec definicji funkcji


    
# 3 zadanie
template <class _T1, class _T2>
    inline bool
    operator==(const pair <_T1,_T2>&__x, const pair <_T1,_T2>&__y)
    {
        return __x.first == __y.first && __x.second == __y.second;
    }

- nazwy i kategorie parametrów szablonu - 
- nazwe funkcji
- typ wartości funkcji (i sposób jej przekazania),
- wskazówke co do sposobu kompilacji funkcji,
- liczbę, typy i sposób przekazania argumentów funkcji,
- treść funkcji
