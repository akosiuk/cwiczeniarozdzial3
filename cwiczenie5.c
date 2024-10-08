#include <stdio.h>

int main() 
{
    // Stala liczba sekund w roku (3.156 x 10^7)
    const double SEKUNDY_W_ROKU = 3.156e7;
    
    // Deklaracja zmiennej na wiek
    int wiek = 23;

    // Pobranie wieku od uzytkownika
    printf("Podaj swoj wiek w latach: 23");
    scanf("%d", &wiek);

    // Obliczenie wieku w sekundach
    double wiek_w_sekundach = wiek * SEKUNDY_W_ROKU;

    // Wyswietlenie wyniku
    printf("Twoj wiek w sekundach wynosi: %.0f\n", wiek_w_sekundach);

    return 0;
}
