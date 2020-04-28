# Zadanie4
    Instrukcje użyte do generowania wykresu w gnuplocie
    ```
    reset
    set terminal png size 1280,960
    set output "graph.png"
    set xlabel "Przedzialy"
    set ylabel "Ilosc w przedziale"
    set grid
    set boxwidth 0.95 relative
    set style fill transparent solid 0.5 noborder
    plot "datarandom.dat" u 1:3:xtic(2) w boxes lc rgb"green" notitle

    ```
# Wykres
    <img src="https://github.com/aszpatowski/cplusplus2semester/tree/master/lista4/zadanie3i4/graph.png">

