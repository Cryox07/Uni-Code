#include <stdbool.h>
#include <stdio.h>

int minimumRek(int a[], int l);
int minimumIter(int a[], int l);
int produktRek(int a[], int l);
int produktIter(int a[], int l);

int main() 
{
    int l = 5;
    int a[5]= {77,15,47,8,2};

    printf("Das Minimum nach Rekursion ist: %d\n Das Minimum nach Iteration ist: %d\n", minimumRek(a, l), minimumIter(a, l));

    printf("Das Produkt nach Rekursion ist: %d\n Das Produkt nach Iteration ist: %d\n", produktRek(a, l), produktIter(a, l));

}


int minimumRek(int a[], int l)
{   
    if (l == 1)
    {
        return a[0];
    }

    int min = minimumRek(a, l-1);
    return (a[l-1]<min) ? a[l-1]: min;

}

int minimumIter(int a[], int l)
{
    int min;
    for (int i = 0; i <l; i++)
    {
        if (i == 0)
        {
            min = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int produktRek(int a[], int l)
{
    if (l == 1)
    {
        return a[0];
    }
    return a[l-1] * produktRek(a, l-1);
}
int produktIter(int a[], int l)
{
    int produkt = 1;
    for (int i = 0; i < l; i++ )
    {
        produkt *= a[i];
    }
    return produkt;
}

