#include <stdio.h>
#include <float.h>

int main() 
{
    float f = FLT_MIN;  // Najmniejsza wartosc dodatnia dla float
    printf("Poczatkowa wartosc f: %e\n", f);

    // Niedomiar
    f /= 10.0f;  // Dzielenie przez duaz liczbe, co powoduje niedomiar
    printf("Po niedomiarze: %e\n", f);

    return 0;
}