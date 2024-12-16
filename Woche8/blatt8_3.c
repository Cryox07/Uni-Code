#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void entferne(char str[], char c);

int main()
{
    char str1[] = "Testwort"; 
    entferne(str1, 'w');
    char str2[] = "Weihnachten";
    entferne(str2, 'n');
    char str3[] = "Hund";
    entferne(str3, 'a');
    char str4[] = "";
    entferne(str4, 'x');

    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("%s\n", str4);
}

void entferne(char str[], char c) 
{
    int n = strlen(str);
//    printf("%d", n);
    int count = 0;

    for (int i = 0; i < n; i++)
    {
//        printf("%d",i);
        if (count == 0 && str[i] == c)
        {
            count++;
            continue;
        }
        if (count == 1)
        {    
            str[i-count] =  str[i];
            if(i == n-count)
            {
                str[i] = 0;
            }
        }
    }
}
