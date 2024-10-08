#include <stdio.h>

int main() 
{
    // Deklaracja zmiennej do przechowywania liczby zmiennoprzecinkowej
    double liczba;

    // Pobranie liczby od uzytkownika
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%lf", &liczba);

    // Wyswietlenie liczby w trzech roznych formatach
    printf("Podana liczba to %.6f lub %.6e lub %a\n", liczba, liczba, liczba);

    return 0;
}
