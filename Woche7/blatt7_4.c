#include <stdio.h>
#include <stdbool.h>

void reverse(int arr[], int n);

int main ()
{
  int arr1[] = {1,2,3,4,5,6,7,8};
  int n1 = 8;

  int arr2[] = {1,2,3,4,5,6,7};
  int n2 = 7;

reverse(arr1, n1);
reverse(arr2, n2);


  for(int loop=0; loop < n1; loop++)
  {
    printf("%d\n",arr1[loop]);
  }

  printf("\n\n\n");

  for(int loop=0; loop < n2; loop++)
  {
    printf("%d\n",arr2[loop]);
  }
  return 0;
}

void reverse(int arr[], int n)
{
//  int swap;
  for(int i = 0; i <= n/2; i++)
  {
    arr[i] = arr[n-i-1];
//    swap = arr[i];
//   arr[i] = arr[n-i-1];
//    arr[n-i-1] = swap;
  }
}
