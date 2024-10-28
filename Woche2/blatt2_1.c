#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    int b;

    
    printf("Bitte geben Sie einen Wert für a ein: ");
    scanf("%d",&a); //scan for a
    printf("Bitte geben Sie einen Wert für b ein: ");
    scanf("%d",&b); //scan for b


    int A = a*b;
    int U = 2*(a+b);

    printf("Für das folgende Rechteck, a = %d und b = %d, ergibt sich ein Flächeninhalt von %d und einen Umfang von %d\n", a, b, A, U);
    return 0;

}
