#include <stdio.h>

int main() 
{
    // Stala do przeliczania cali na centymetry
    const double cal_na_cm = 2.54;

    // Zmienna przechowujaca wzrost w centymetrach
    double wzrost_cm = 171;  // Moj wzrost

    // Przeliczenie na cale
    double wzrost_inch = wzrost_cm / cal_na_cm;

    // Wyswietlenie wynikow
    printf("Moj wzrost w centymetrach: %.2f cm\n", wzrost_cm);
    printf("Moj wzrost w calach: %.2f inch\n", wzrost_inch);

    // Przeliczenie z powrotem z cali na centymetry
    double przeliczone_cm = wzrost_inch * cal_na_cm;

    // Wyswietlenie przeliczenia z powrotem
    printf("Moj wzrost przeliczony z powrotem na centymetry: %.2f cm\n", przeliczone_cm);

    return 0;
}
