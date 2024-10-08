#include <stdio.h>

int main() 
{
    // Deklaracja zmiennych
    double masa_czasteczki = 3.0e-23; // Masa jednej czasteczki wody w gramach
    double masa_litra = 1000.0;       // Masa 1 litra wody w gramach
    double objetosc;                  // Objetosc wody w litrach
    double liczba_czasteczek;

    // Pobranie objetosci od uzytkownika
    printf("Podaj objetosc wody w litrach: ");
    scanf("%lf", &objetosc);

    // Obliczenie liczby czasteczek
    liczba_czasteczek = (objetosc * masa_litra) / masa_czasteczki;

    // Wyśsietlenie wyniku
    printf("Liczba czasteczek w %.2f litrach wody: %.2e\n", objetosc, liczba_czasteczek);

    return 0;
}
