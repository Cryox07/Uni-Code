#include <stdio.h>
#include <stdbool.h>

int sum(int n);

int fakultaet (int n);

int fibonacci(int n);

int main () 
{
    int i;
    int result;

    printf("Geben Sie eine Zahl ein bis, zu welcher die Zahlen aufsummiert werden sollen: ");
    scanf("%d", &i);

    result = sum(i);
    printf("Die Summe aller Zahlen bis %d ist %d\n", i, result);


    printf("Geben Sie eine Zahl ein zu welcher Sie die Faktultaet bestimmen wollen: ");
    scanf("%d", &i);

    result = fakultaet(i);
    printf("Die Fakultaet von %d ist %d\n", i, result);


    printf("Geben Sie eine Zahl ein bis, zu welcher Sie die Fibonacci-Zahlen bestimmen wollen: ");
    scanf("%d", &i);

    printf("Hier sind die Fibonacci-Zahlen bis zur Zahl %d\n\n",i);

    for (int count = 0; count<i; count++)
    {
        result = fibonacci(count);

        printf("| %d | %d |\n", count,result);
    }
    return 0;
}

int sum(int n)
{
    if (n==0)
    {
        return 0;
    }

    return n + sum(n-1);
}

int fakultaet (int n)
{
    if (n==0)
    {
        return 1;
    }
    return n * fakultaet(n-1);
}
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}




