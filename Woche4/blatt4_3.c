#include <stdio.h>
#include <stdbool.h>

int main()
{

int x; 
int factorial = 1;
//unsigned int factorial = 1;
//long long factorial = 1;
//unsigned long long factorial = 1;

  printf("Bitte geben Sie ihre Zahl ein: ");
  scanf("%d", &x);

  for (int i = 1; i <= x; i++) // for schleife für die Dauer von i != n
  {
    factorial *= i;
  }
    printf("%d! = %d\n\n", x, factorial);
//    printf("%d! = %u\n\n", x, factorial);
//    printf("%d! = %lld\n\n", x, factorial);
//    printf("%d! = %llu\n\n", x, factorial);

//  int ll = sizeof(long long); = 8 also 8 byte = 2* (8*8) = 128  
//  printf("%d\n", ll);

// pruefung durch Taschenrechenr moeglich
    printf("Für int ist der größt mögliche Wert für n = 12\n"); //groesste Zahl = 2^(32-1)-1, 2^(31) -1 < 13! 
  
    printf("Für unsignt int ist der größt mögliche Wert für n = 12\n"); //groesste  Zahl = 2^(32)-1, 2^(32) -1 < 13! 

    printf("Für long long ist der größt mögliche Wert für n = 33\n"); //groesste  Zahl = 2^(128-1)-1, 2^(127) -1 < 34! 1.7014118e+38

    printf("Für unsignt long long ist der größt mögliche Wert für n = 34\n"); //groesste  Zahl = 2^(128)-1, 2^(128) -1 < 34! 3.4028237e+38
  return 0;
}
