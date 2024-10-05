#include <stdio.h>

int main() 
{
    int ascii_code;  // Zmienna do przechowania kodu ASCII
    
    // Prosba o podanie kodu ASCII
    printf("Podaj kod ASCII: ");
    scanf("%d", &ascii_code);
    
    // Wyswietlenie znaku odpowiadajacego kodowi ASCII
    printf("Znak odpowiadający kodowi ASCII %d to: %c\n", ascii_code, (char)ascii_code);
    
    return 0;
}
