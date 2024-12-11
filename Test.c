#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// math.h ist bereits eingebunden und darf verwendet werden! 

double leibniz (double n) {
    // TODO
    double pi = 0.;
    if(n >= 0)
    { 
    for( int i = 0; i<=n; i++)
    {
        pi = pi + ((pow(-1.0,i))/(2.0*i+1.0));

    }
    pi *=4;
    printf("%lf", pi);
    
    return pi;
    }
    else 
    {
      return 3;
    }
}

int main()
{
leibniz(2);
return 0;
}