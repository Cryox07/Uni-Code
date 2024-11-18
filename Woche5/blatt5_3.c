#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main()
{
  FILE *file_read = NULL;
  FILE *file_write = NULL;

  int ca = 0,ce = 0,ci = 0,co = 0,cu = 0,summe =0;
  char input;

  file_read = fopen("text.txt", "r");
  file_write = fopen("text_auflistung.txt", "w");

  if (file_read == NULL)
  {
    printf("Es it ein Fehler beim lesen aufgetreten!\n");
    return 1;
  }
  
  while (!feof(file_read))
  {
    fscanf(file_read, "%c",&input);
//   printf("Die Zahl ist: %d\n",input);
    switch(tolower(input))
    {
      case 'a': ca++;break;
      case 'e': ce++;break;
      case 'i': ci++;break;
      case 'o': co++;break;
      case 'u': cu++;break;
      default: summe++;break;
    }
  }
//  printf("Das Maximum ist: %d\n", max);

  summe = summe+ca+ce+ci+co+cu;
  if (file_write == NULL)
  {
    printf("Fehler beim schreiben!\n");
    return 1;
  }
  fprintf(file_write, "Es sind %d Zeichen augetaucht, davon waren\n%d ein a,\n%d ein e,\n%d ein i,\n%d ein o,\n%d ein u\n", summe, ca, ce, ci, co, cu);
  return 0;
}
