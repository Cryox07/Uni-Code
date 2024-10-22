#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 2;
    int b = 4;

    int A = a*b;
    int U = 2*(a+b);

    printf("Für das folgende Rechteck, a = %d und b = %d, ergibt sich ein Flächeninhalt von %d und einen Umfang von %d\n", a, b, A, U);
}