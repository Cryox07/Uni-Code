#include "stdio.h"

#define DIM 3
typedef float Vec3[DIM];

void read_data (Vec3 v); // x, y, z einlesen
void show_data (Vec3 v); // Vektor ausgeben
void add (Vec3 res, Vec3 a, Vec3 b); // Vektoraddition
void sub (Vec3 res, Vec3 a, Vec3 b); // Vektorsubtraktion
float skalar (Vec3 a, Vec3 b); // Skalarprodukt
void cross (Vec3 c, Vec3 a, Vec3 b); // Kreuzprodukt

int main()
    {
    Vec3 u = {1,0,0};
    Vec3 v = {0,1,0};
    Vec3 w;

    printf("Das Ergebnis des Kreuzproduktes ist: \n");

    cross(w,u,v);
    show_data(w);
    
    cross(u,u,v);
    show_data(u);

    }

void read_data(Vec3 v)
{
    for (int i = 0; i< DIM ; i++)
    {
        printf("Bitte geben Sie den %d. Vektor ein: ",i);
        scanf(" %f", &v[i]);
    }
}
void show_data (Vec3 v)
{

    printf("Die Werte des Vektors sind wie Folgt:\n");
    for (int i=0; i<DIM;i++)
    {
        printf("%f\n", v[i]);
    }
}
void add (Vec3 res, Vec3 a, Vec3 b)
{
    for(int i=0; i<DIM;i++)
    {
        res[i] = a[i] + b[i];
    }
}
void sub (Vec3 res, Vec3 a, Vec3 b)
{
    for(int i=0; i<DIM;i++)
    {
        res[i] = a[i] - b[i];
    }

}
float skalar (Vec3 a, Vec3 b)
{
    float res = 0.0;
    
    for (int i=0;i<DIM;i++)
    {
        res += a[i]*b[i];
    }
}
void cross (Vec3 c, Vec3 a, Vec3 b)
{
    for(int i=0;i<DIM;i++)
    {
        c[i]=((a[(i+1)%DIM])*b[(i+2)%DIM])-((b[(i+1)%DIM])*a[(i+2)%DIM]);
    }
}
