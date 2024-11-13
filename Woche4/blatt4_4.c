#include <stdio.h>

int main ()
{
    double pi = 0.0;// pi = 0 da 0 das neutrale Objekt der Dddition ist

    for (int i = 0; i <= 1000000; i++)
    {
       

        if(i % 2 == 0)
        {
            pi += 1.0/(2*i+1);
        }
        else
        {
            pi -= 1.0/(2*i+1);
        }
    } 
    pi *= 4;
    printf("Leibniz-Reihe mit 1.000.000 Summanden: %lf\n\n", pi);  

    
    pi = 1;// pi = 1 da 1 das neutrale Objekt der Multiplikation ist

    // siehe Formel https://www.biancahoegel.de/mathe/rechnen/wallissches_produkt.html
    for (int i = 1; i <= 1000000; i++)
    {
        pi *= (4.0*i*i)/(4.0*i*i-1.0);
    } 
    pi *= 2;

    printf("Wallis’schen Produktes mit 1.000.000 Faktoren: %lf\n", pi);
    
        return 0;
}