#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main()
{
  FILE *file_read = NULL;
  FILE *file_write = NULL;

  int max = INT_MIN, input;

  file_read = fopen("werte.txt", "r");
  file_write = fopen("ergebnis.txt", "w");

  if (file_read == NULL)
  {
    printf("Es it ein Fehler beim lesen aufgetreten!\n");
    return 1;
  }
  
  while (!feof(file_read))
  {
    fscanf(file_read, "%d ",&input);
//   printf("Die Zahl ist: %d\n",input);
    if (input > max)
    {
      max = input;
    }

  }
//  printf("Das Maximum ist: %d\n", max);

  if (file_write == NULL)
  {
    printf("Fehler beim schreiben!\n");
    return 1;
  }
  fprintf(file_write, "Die groesste Zahl ist: %d\n",max);
  return 0;
}
