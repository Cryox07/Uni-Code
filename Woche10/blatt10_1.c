#include <stdio.h>
#include <stdbool.h>
#include <limits.h>


    typedef struct kunde{
        unsigned long nummer;
        char name[100];
        short geb_jahr;
        unsigned short geschlecht;
    } Kunde;

struct kunde kdb[1000];

int einfuegen(struct kunde kdb[], int index);
void anzeigen(struct kunde kdb[], int index);
/*
void ueberpruef_nummer(struct kunde kdb[], long long int, int index);
void ueberpruef_name(struct kunde kdb[], char name[100], int index);
void ueberpruef_geb_jahr(struct kunde kdb[], short geb_jahr, int index);
void ueberpruef_geschlecht(struct kunde kdb[], unsigned short, int index);
*/

int main() {
    int wahl = 1;
    int h_index = 0;

    long long nummer;
    char name[100];
    short geb_jahr;
    unsigned short geschlecht;


    while( wahl !=0 ){
        int index;

        printf("\n\n <1> Neuen Datensatz anlegen\n <2> Vorhandenen Datensatz abrufen \n <0> Ende\n\n");

        printf("Ihre Wahl: ");
        scanf("%d", &wahl);
        if(wahl ==0){
            break;
        }

        
        if(wahl ==1){
            printf("Anzuzeigender Index: %d\n\n", h_index);
            printf("Kundennr.: ");
            scanf("%lld",&nummer);

            if(nummer < 0 || nummer > ULONG_MAX)
            {      
                printf(" \n Bitte ueberpruefen Sie Ihre eingabe und versuchen es bitte erneut.");
                continue;
            }
            else
            {
                kdb[h_index].nummer = nummer;
            }

            printf("Name: ");
            scanf("%s", kdb[h_index].name);
            
            printf("Geburtsjahr: ");
            scanf("%hd",&geb_jahr);

            if(geb_jahr < 1800 ||  geb_jahr > 2025)
            {
                printf(" \n Bitte ueberpruefen Sie Ihre eingabe und versuchen es bitte erneut.");
                continue;
            }
            else
            {
                kdb[h_index].geb_jahr = geb_jahr;
            }
            printf("Geschlecht :");
            scanf("%d", &kdb[h_index].geschlecht);

            h_index+=1;
        }


        if(wahl==2){
        printf("Anzuzeigender Index: ");
        scanf("%d", &index);
        if(index < 0 || index > 1000){
            printf("Der Index ist nicht bekannt.\n");
            continue;
        }
            printf("\n");
            anzeigen(kdb,index);
        }
    }


    return 0;
}

int einfuegen(struct kunde kdb[],int index){
    
    return 0;
}

void anzeigen(struct kunde kdb[], int index){

    printf("Kundennr.: %lu\n", kdb[index].nummer);
    printf("Name: %s\n", kdb[index].name);
    printf("Geburtsjahr: %hd\n",kdb[index].geb_jahr);
    printf("Geschlechg (0 - d, 1 - w, 2 - m): %hu\n",kdb[index].geschlecht);
}

/*
void ueberpruef_nummer(struct kunde kdb[], long long nummer, int index)
{
 if(nummer < 0 || nummer > ULONG_MAX)
 {
    printf(" \n Bitte ueberpruefen Sie Ihre eingabe und versuchen es bitte erneut.");
    continue;
 }
 else
 {
    kdb[index].nummer = nummer;
 }
}

void ueberpruef_name(struct kunde kdb[], char name[100], int index)
{ int i = 0;
    while(name[i] != "\0")
    {
        if(i = 100)
        {
            printf(" \n Bitte ueberpruefen Sie Ihre eingabe und versuchen es bitte erneut.");
            continue;
        }
    }
    int j = 0;
    while (j <= i)
    {
        kdb[index].name[j] = name[j];
    }
    
}

void ueberpruef_geb_jahr(struct kunde kdb[], short geb_jahr, int index)
{
    if(geb_jahr < 1800 ||  geb_jahr > 2026)
    {
        printf(" \n Bitte ueberpruefen Sie Ihre eingabe und versuchen es bitte erneut.");
        continue;
    }
    kdb[index].geb_jahr = geb_jahr;
}

void ueberpruef_geschlecht(struct kunde kdb[], unsigned short geschlecht, int index)
{
    if(geschlecht > 2)
    { 
        printf(" \n Bitte ueberpruefen Sie Ihre eingabe und versuchen es bitte erneut.");
        continue;
    }
    kdb[index].geschlecht = geschlecht;
}
*/