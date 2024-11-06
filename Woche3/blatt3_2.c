#include <stdio.h>
#include <stdbool.h>


int main() {
    
    char x;

    printf("Welche aufgabe soll ausgegeben werden? ");
    scanf("%c", &x);

    switch (x) {
        case 'a': 
            printf("\n\n2a)\n\n");
            for (int i = 100; i<= 200; i++) {
                printf("%d\n",i);
            }
        break;

        case 'b':
            printf("\n\n1b)\n\n");
            for (int i = 110; i <= 222;i++) {
                if (i % 1 == 0 ){
                    printf("%d\n",i);
                }
            }
        break;

        case 'c':
            printf("\n\n2c)\n\n");
            for (int i = 333; i <= 222;i--) {
                if (i % 3 == 0 ){
                    printf("%d\n",i);
                }
            }
        break;

        case 'd':
            printf("\n\n2d)\n\n");
            int summe = 0;
            for (int i = 1; i <= 1000;i++) {
                if (i % 3 == 0 ){
                    summe = summe + i;
                }
            }
            printf("%d\n",summe);
        break;

        case 'e':
            printf("\n\n2e)\n\n");

            int z, c = 0;

            printf("Bitte geben Sie eine Zahl ein: ");
            scanf("%d",&z);

            while (z!=0){
                int b = z % 10;
                if (b==7){
                    c++;
                }
                z /=10;     
            }
            if (c > 0){
                printf("true\n");
            }
            else {
                printf("false\n");
            }
        break;

        case 'f':
            printf("\n\n2e)\n\n");

            int zahl, count = 0;

            printf("Bitte geben Sie eine Zahl ein: ");
            scanf("%d",&zahl);

            while (zahl!=0){
                int b = zahl % 10;
                if (b==7){
                    count++;
                    
                }
                zahl /=10;     
            }
            printf("Die Ziffer 7 kommt genau %d mal vor\n", count);
        break;
    }
    return 0;
}
