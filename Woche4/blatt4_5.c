#include <stdio.h>
#include <stdbool.h>

int main ()
{
    printf("%d \n", 0.1 + 0.2 == 0.3);
    printf("%d \n", 0.1 + 0.3 == 0.4);

    // kann nicht abgebildet werden, da Gleitkommazahlen in Zweierpotenzen abgebildet werden und die addition dieser nicht dem Ergebniss entspricht. Beim verlgeich der Zahlen wird vermutloch eine abweichung in den Bits des Floats erkannt und daher flase ausgegeben.

    float s1 = 0.0;
    double s2 = 0.0;
    
    int n, a;
    printf("Bitte geben Sie eine der Zahlen an (1 = 10.000, 2 = 100.000, 3 = 1.000.000): ");
    scanf("%d", &a);

    switch(a)
    {
        case (1):
        n = 10000;
        break;

        case (2):
         n = 100000;
        break; 

        case (3):
         n = 1000000;
        break; 
    }

    for (int i = 1; i <= n; i++)
    {
        s1 += 1.0/i;
        s2 += 1.0/i;
    }

    printf("Das Ergebnis  für n = %d ist für float  %.16f \n",n,s1);
    printf("Das Ergebnis  für n = %d ist für double %.16lf \n",n,s2);

    //double ist genauer, da dieser mehr bits zu darstellung der Zahl hat. 

    return 0;
}