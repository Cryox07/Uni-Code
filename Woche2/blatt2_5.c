#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b, n;

    printf("Bitte geben Sie die Anzahl an kleinen (1kg) Schokoriegel, großen (5kg) Schokoriegel und der Menge an gegessener Schokolade wie folgt an (4 2 8): ");

    scanf("%d %d %d", &a, &b, &n);

// TODO: Rechnung erstellen und überprüfen Siehe Aufabe 5!!
 // n = n-()

    int divisor = n / 5;
    
    if (b >= divisor) {
        n = n-(5*divisor);
    }
    else {
        n=n-(5*b);
    }

    if (a >= n) {
        printf("Es müssen %d kleine Schokoriegel gegessen werden.", n);
    }
    else {
        printf("Es müssen %d kleine Schokoriegel gegessen werden.", -1);
    }

    

    return 0;
}
