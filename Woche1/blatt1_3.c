#include <stdio.h>
#include <stdbool.h>

int main (){
    int i = 23, j;
    int zahl = 42;

    j = i + zahl; // i = 23, zahl = 42 -> berechnet den Wert 65
    j = j + 1; //erhoehe j um 1 -> erhöht von 65 auf 66
    printf("j hat den Wert %d\n", j); // gibt den Wert 66 aus 

     zahl = 2 * (17 + 4) - 7 / 3; // berechnet für 7/3 den int wert 2, 42-2=40
    printf("zahl hat Wert %d\n", zahl);
    return 0;
}