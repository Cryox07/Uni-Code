#include <stdio.h>
#include <stdbool.h>


bool mauern (int klein, int gross, int ziel) {
  if(klein * 1 +gross * 5 >= ziel)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int holeWert (char c)
{
  int value;
  printf("%c eingeben: ", c);
  scanf("%d", &value);
  return value;
}
int main()

{
  int a = mauern(holeWert('k'), holeWert('g'), holeWert('Z'));
  printf("%d\n",a);
//  if (a==1)
//  {
//    printf("true");
//  }
//  else
//  {
//    printf("false");
//  }
//  return 1;
}
