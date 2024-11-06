#include <stdio.h>
#include <stdbool.h>

int main() {
    int x, g1, g2; // deklaration der globalen Variablen

    //Abfrage der Grenzen der Betrachtung/Rechnung
    printf("Bitte geben Sie die untere Grenze ein: ");
    scanf("%d", &g1);
    printf("Bitte geben Sie die untere Grenze ein: ");
    scanf("%d", &g2);

   for (x = g1; x <= g2; x++) { //durchsuchen aller Möglichkeiten 
    int  result = x * x *x - 73 * x * x + 1655 * x - 11951; 
    if (result == 0) {
        printf("Eine Lösung ist %d\n", x);
    }
   }
    return 0;
}