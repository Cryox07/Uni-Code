#include <stdio.h>
#include <stdbool.h>

int main() 
{

    int a, b;

    printf("Bitte geben Sie die erste Zahl (kleinere) ein: ");
    scanf("%d",&a);
    
    printf("Bitte geben Sie die zweite Zahl ein: ");
    scanf("%d", &b);

    if (a<1 || a>6) {
        printf("Die erste Zahl ist nicht im Wertebereicht von 1-6!\n");
    }
    else if (b<1 || b>6)  {

        printf("Die zweite Zahl ist nicht im Wertebereicht von 1-6!\n");
    }
    else {
        if (a == b) {
            printf("Pasch %d%d\n",a,b);
        }
        else if (a==1 && b==2) {
            printf("Maexchen\n");
        }
        else {
            printf("%d%d\n",b,a);
        }
    }
    return 0;
}
