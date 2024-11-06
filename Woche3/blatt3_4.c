#include <stdio.h>
#include <stdbool.h>

int main() {
    int summe = 0, x; //deklaration alleer globalen Variablen

    //abfrage der zu teilenden Zahl
    printf("Bitte geben Sie eine Zahl ein, für welche Sie die Summe aller Teiler haben möchten: ");  
    scanf("%d", &x);
    for (int i = 1; i <= x; i++) {
        if (x % i == 0){
            summe = summe + i;
        } 
    }
    printf("Die Summe aller Teiler von %d ist %d\n", x, summe);

    return 0;
}