#include <stdio.h>
#include <stdbool.h>

unsigned int string_length(char str[]);

int main () 
{
    char str[] ="Hallo Welt!";
    printf("%d\n", string_length(str));
}

unsigned int string_length(char str[])
{
    unsigned int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    return i++;
}
