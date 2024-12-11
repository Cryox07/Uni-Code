#include <stdio.h>
#include <stdio.h>


void swap(int arr1[], int arr2[], int n);

int main ()
{

  int arr1[] = {0,1,2,3,4,5,6,7,8,9};
  int arr2[] = {10,11,12,13,14,15,16,17,18,19};
  int n = 10;

  swap(arr1, arr2, n);
  for(int i = 0; i<n;i++)
  {
    printf("%d\n",arr1[i]);
  }
  
  printf("\n\n\n");

  for(int i = 0; i<n;i++)
  {
    printf("%d\n",arr2[i]);
  }
  return 0;
}

void swap(int arr1[], int arr2[], int n)
{
  int swap;
  for(int i = 0; i < n; i++)
  {
    swap = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = swap;
  }
}
