#include <stdbool.h>
#include <stdio.h>

int main() {

  int  x, y = 0, i = 0; //  x fuer eingabe, y fuer ltz, i fuer counter und schleife

  while (i <= 10) {
  
    if (i == 10){
      printf("%d\n", y);
      break;
    }

    printf("Bitte geben Sie die %d. Zahl an: ", i + 1);
    scanf("%d", &x);
    if (x <= 0) {
      continue;
    }
    if (i == 0)
    {
      y = x;
    }
    if (x < y) {
      y = x;
    }
    i++;
  }
  printf("Die kleinste Zahl ist: %d\n",y);    
  return 0;
}
