#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

float holeWert (char c)
{
  float value;
  printf("%c eingeben: ", c);
  scanf("%f", &value);
  return value;
}

float berechneSpannung (float r, float i)
{
  return r*i;
}

float berechneStrom (float u, float r)
{
  return u/r;
}

float berechneWiderstand (float u, float i)
{
  return u/i;
}
void zeigeErgebnis (char c, float x)
{
  printf("%c betraegt: %f\n\n",c,x);
}

int main ()
{
  float u,r,i;
  char s;


  while (1>0)
  {
    printf("Bitte geben Sie den zu berechnenden Wert an (Spannung = U, Strom = I, Widerstand = R, Q zum beenden): ");
    
    scanf("%c", &s);
  
  
    switch (toupper(s))
    {
      case 'U': zeigeErgebnis(s, berechneSpannung(holeWert('R'), holeWert('I'))); break;
      case 'I': zeigeErgebnis(s, berechneStrom(holeWert('U'), holeWert('R'))); break;
      case 'R': zeigeErgebnis(s, berechneWiderstand(holeWert('U'), holeWert('I')));break;
    }
    if (toupper(s) == 'Q') {
      break;
    }
  }
}
