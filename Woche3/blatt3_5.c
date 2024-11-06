#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    int x ,z,zqs = 0,eqs = 0;

    printf("Welche aufgabe soll ausgegeben werden? ");
    scanf("%d", &x);

    switch (x)
    {
        case 5:
            printf("Bitte geben Sie eine Zahl ein: ");
            scanf("%d",&z);

            if (z >= 0)
            { 
                while (z!=0)
                {
                    int b = z % 10;
                    eqs = eqs + b;
                    z /=10;     
                }
                printf("Die Quersumme der Zahl ist %d\n",eqs);
            }
            else
            {
                printf("Geben Sie eine positive ganze Zahl an!");    
            }
        break;

        case 6:
            printf("Bitte geben Sie eine Zahl ein: ");
            scanf("%d",&z);

            if (z >= 0)
            { 
                while(z > 10)
                {
                    zqs = 0;
                    while (z!=0)
                    {
                        
                        int b = z % 10;
                        zqs = zqs + b;
                        z /=10;     
                    }
                    printf("%d\n",zqs);
                    z = zqs;

                }
                eqs = z;
                printf("Die Quersumme der Zahl ist %d\n",eqs);
            }
            else
            {
                printf("Geben Sie eine positive ganze Zahl an!");    
            }
            
        break;
    }

    return 0;
}