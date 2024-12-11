#include <stdio.h>
#include <stdbool.h>

int main ()
{
  int x = 4;
  int arr[] = {5,-2,99,25};
  int gt, lt;
  for (int i = 0; i < x; i++)
    {
      if (i==0)
      {
        lt = arr[i];
        gt = arr[i];
      }
      if(arr[i] > gt)
      {
        gt = arr[i];
      }
      if (arr[i] < lt)
      {
        lt = arr[i];
      }
    }
  printf("Die kleinste Zahl ist %d und die größte Zahl ist %d.\n", lt,gt);
  return 1;
}
