#include <stdio.h>
#include <stdbool.h>


int runde10(int n)
{
  if (n % 10 >= 5)
  {
    n = n + 10 - (n%10);
  }
  else if (n%10 <= -5)
  {
    n = n-10 - (n%10);
  }
  else
  {
    n = n -(n%10);
  }
  return n;
}

int rundeSumme(int a, int b, int c)
{
  a = runde10(a);
  b = runde10(b);
  c = runde10(c);

  return a+b+c;
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
  printf("Die Summe betraegt: %d\n\n",x);
}
 
int main ()
{
  int a,b,c;
  zeigeErgebnis(rundeSumme(holeWert('a'), holeWert('b'), holeWert('C')));

}
