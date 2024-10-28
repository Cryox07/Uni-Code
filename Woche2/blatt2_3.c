#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, teiler = 57;

    printf("Bitte geben Sie eine Zahl ein, von welcher Sie den Rest der Teilung durch 57 haben möchten: ");
    scanf("%d",&n);

    if (n % teiler ==0) {
        printf("Scherzkeks\n");
    }
    else {
        printf("Der Rest ist %d\n",n % teiler);
    }

    return 0;
}
