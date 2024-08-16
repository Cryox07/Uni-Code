#include <stdio.h>
#include <string.h>

int main(){
    char name[25];
    int age;

    printf("\nWhat's your name?");
    printf("\nEnter name here: ");
    fgets(name,25, stdin);
name[strlen(name)-1] ='\0';

    printf("\nHow old are your?");
    printf("\nEnter age here: ");
    scanf("%d",&age);

    printf("\nHello %s, how are your?",name);
    printf("\nYou are %d years old.", age);

    printf("\tTest1!\n");
    printf("Test!!\n");

    return 0;
}
