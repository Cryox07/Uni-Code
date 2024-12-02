#include <stdio.h>
#include <stdbool.h>

int ggT(int a, int b)
{
  if (a <= 0 || b <=0){
    return -1;
  }
  while (a != b)
  {
    if (a >b)
    {
      a= a-b;
    }
    else
    {
      b = b-a;
    }
  }
  return b;
}
int kgV(int a, int b)
{
  return (a*b)/ggT(a,b);
}
        
int holeWert (char c)
{
  int value;
  printf("%c eingeben: ", c);
  scanf("%d", &value);
  return value;
}

void zeigeErgebnis (int x)
{
  printf("Der ggT betraegt: %d\n\n",x);
}

int main ()
{
  zeigeErgebnis(kgV(holeWert('a'),holeWert('b')));
  return 0;
}
