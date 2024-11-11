#include <stdio.h>
#include <stdbool.h>

int main()
{
int i, x, a;

  printf("Bitte geben Sie einen der Faelle eine (1 = int, 2 = unsigned int...): ");
  scanf("%d", &a);

  printf("Bitte geben Sie ihre Zahl ein: ");
  scanf("%d", &x);


  switch (a)
  {
  case (1):
      int z1=1;
  for(i=1; i < x; i++)
  {
    if( z1  *i > 0)
    {
      z1  *=i;
    }
    else{
      printf("Die maimale Faktor der Fakultät für diesen Datentyp ist %d\n", i);
      break;
    }
  }
  printf("Die Fakultät von %d ist %d\n", i,z1);

   break;


  case (2):
      unsigned int z2=1;
  for(i=1; i < x; i++)
  {
    if( z2*i > z2)
    {
      z2*=i;
    }
    else{
      printf("Die maimale Faktor der Fakultät für diesen Datentyp ist %d\n", i);
      break;
    }
  }
  printf("Die Fakultät von %d ist %d\n", i, z2);

      break;
  case (3):
      long long z3=1;
  for(i=1; i < x; i++)
  {
    if( z3*i > 0)
    {
      z3*=i;
    }
    else{
      printf("Die maimale Faktor der Fakultät für diesen Datentyp ist %d\n", i);
      break;
    }
  }
  printf("Die Fakultät von %d ist %lld\n", i, z3);

      break;
  case (4):
      unsigned long long int z4=1;
  for(i=1; i < x; i++)
  {
    if( z4*i > 0)
    {
      z4*=i;
    }
    else{
      printf("Die maimale Faktor der Fakultät für diesen Datentyp ist %d\n", i);
      break;
    }
  }
  printf("Die Fakultät von %d ist %lld\n", i, z4);

      break;
  }

  return 0;
}
