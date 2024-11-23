#include <stdio.h>

int main()
{
    int a, b;
    int result = 0;

    // TODO; zuerst a und b noch einlesen:

    /*  Problem 1:
        Division mit negativen Zahlen
        a = 4, b = -1;
        bei a = a - b -> a = 1 - (-1)
        a wird erst kleiner null wenn die variable überlaeuft (int-overflow)
    */

    /*  Problem 2:
        Dividend ist ein vielfaches vom Divisor
        a = 4, b = 4;
        a - b > 0 -> 4 - 4 > 0 ist false, daher wird die schleife nicht aus gefuehrt -> 4/4 = 0

        Loesung:
        while (a - b >= 0) 
        {}
    */

    /* Problem 3:
        Edgecase analyse fuer b = 0
        Division durch 0 ist nich moeglich
        Daher ist das Programm nicht endend und läuft bis zur manuellen stop oder einem Systemfehler 

        Loesung:
        Division durch 0 nicht zulassen

        if (b == 0) 
        { 
        printf("Division durch 0 nicht moeglich!\n");
        return 1;
        }

    */

    // Dies soll Integer-Division a / b umsetzen:
    while (a - b > 0) {
        result++;
        a = a - b;
    }
    
    printf("%d\n", result);

    /*  return 0 ; fehlt, manche modernen Compiler benötigen das statement teilweise nicht.
        Siehe debug console log VSC mit gcc:
        [Thread 9924.0x5ce8 exited with code 0]
        [Inferior 1 (process 9924) exited normally]
        The program 'C:~\Woche5\blatt5_4.exe' has exited with code 0 (0x00000000). Pfad wurde aus durch mich gekuerzt.
    */
}