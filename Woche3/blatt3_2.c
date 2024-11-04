#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int main() {
    

    printf("\n\n2a)\n\n");
    for (int i = 100; i<= 200; i++) {
        printf("%d",i);
    }

    printf("\n\n2b)\n\n");
    for (int i = 111; i <= 222;i++) {
        
        if (i % 2 == 0 ){
            printf("%d",i);
        }
    }

    printf("\n\n2c)\n\n");
    for (int i = 333; i <= 222;i--) {
        
        if (i % 3 == 0 ){
            printf("%d\n",i);
        }
    }

    printf("\n\n2d)\n\n");
    int summe = 0;

    for (int i = 1; i <= 1000;i++) {
        
        if (i % 3 == 0 ){
            summe = summe + i;
        }
    }
    printf("%d\n",summe);


    printf("\n\n2e\n\n)");

    int z;

    printf("");
    return 0;
}
