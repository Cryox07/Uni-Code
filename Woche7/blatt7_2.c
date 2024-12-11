#include <stdio.h>
#include <stdbool.h>

bool firstLast8(int arr[], int n);

int main ()
{
  int arr[] = {2,8,187,59,8,8};

    printf("%s\n",firstLast8(arr, 6) == 1 ? "True":"False");
  return 0;
}

bool firstLast8(int arr[], int n)
{
  if(arr[0] == 8 || arr[n-1] == 8)
    {
    return true;
    }
  else
  {
  return false;
  }
}
