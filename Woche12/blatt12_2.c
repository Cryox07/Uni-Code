#include <stdio.h>
#include <stdbool.h>

int ackermann(int n, int m);

int main ()
{
    int n, m, result;
    printf("Geben Sie zwei Zahlen ein, für welche Sie die Ackermannzahl bestimmen wollen (n, m): ");

    scanf("%d, %d", &n, &m);

    result = ackermann(n,m);

    printf("Ackermann(%d, %d) = %d\n", n, m, result);
    return 0;
}


int ackermann(int n, int m)
{
    if ( n == 0 && m >= 0)
    {
        return m+1;
    }
    
    if (m == 0 && n >= 1)
    {
        return ackermann(n-1,1);
    }
    
    if (n >= 1 && m >= 1)
    {
        return ackermann(n-1, ackermann(n, m-1));
    }
    return 1;
}
