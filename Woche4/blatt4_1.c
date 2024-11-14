#include <stdbool.h>
#include <stdio.h>

int main() {

  int s, x, y = 0, i = 0; // s fuer switch, x fuer eingabe, y fuer gtz, i fuer counter und schleife

  printf("Waehlen Sie einen der Faelle aus (1 oder 2): ");
  scanf("%d",&s);

  switch (s) {

  case (1):
    while (i <= 10) {
    
      if (i == 10){
        printf("Die groesste Zahl ist: %d\n", y);
        break;
      }

      printf("Bitte geben Sie die %d. Zahl an: ", i + 1);
      scanf("%d", &x);
      if (x < 0) {
        break;
      }
                
      if (x > y) {
        y = x;
      }
      i++;
    }
    break;

    case (2):
      while (i <= 10) {
    
      if (i == 10){
        printf("%d\n", y);
        break;
      }

      printf("Bitte geben Sie die %d. Zahl an: ", i + 1);
      scanf("%d", &x);
      if (x < 0) {
        continue;
      }
                
      if (x > y) {
        y = x;
      }
      i++;

      }
    break;
    
  }
  return 0;
}
