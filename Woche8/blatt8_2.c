#include <stdio.h>
#include <stdbool.h>

unsigned int string_length(char str[]);
bool palindrom(char str[]);
int main () 
{
    char str[] ="lagerregal";
    printf("%d\n", palindrom(str));
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

bool palindrom(char str[])
{
    bool a = true;
    int n = string_length(str);
    if (n<=1)
    {
        a = false;
    }


    for (int i = 0; i <= ((n-1)/2);i++)
    {
        if (str[i] != str[(n-1-i)])
        {
            a = false;
            break;
        }
    }
    return a;
}
