#include <stdio.h>
#include <stdbool.h>

int countOdds(int f[], int n);

int main()
{
int f[] = {2,5,9,8,1,3,5};

  printf("Es gibt %d ungerade Zahlen.\n", countOdds(f,7));
  return 0;
}

int countOdds(int f[], int n)
{
  int count = 0;

  for(int i = 0; i<n; i++)
  {
    if (f[i] % 2 !=0)
    {
      count++;
    }
  }
    return count;
}
