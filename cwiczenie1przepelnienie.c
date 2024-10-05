#include <stdio.h>
#include <math.h>
#include <float.h>

int main() {
    float f = FLT_MAX;  // Najwieksza wartosc zmiennej float
    printf("Początkowa wartość f: %e\n", f);

    // Przepelnienie
    f *= 10.0f;  // Mnoze przez dużą liczbę, co powoduje przepełnienie
    printf("Po przepełnieniu: %e\n", f);

    return 0;
}