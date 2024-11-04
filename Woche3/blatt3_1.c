#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b;

    printf("Bitte geben Sie Zahl 1 ein: ");
    scanf("%d", &a);
    
    printf("Bitte geben Sie Zahl 2 ein: ");
    scanf("%d", &b);

    a = a % 10;
    b = b % 10;

    if (a == b) {
        printf("Letze Ziffer gleich\n");
    }

    return 0;
}
