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


int main() {
    int wahl = 1;
    int h_index = 0;

    long long nummer;
    char name[100];
    short geb_jahr;
    unsigned short geschlecht;


    while( wahl !=0 ){
        int index;
        printf("Ihre Wahl: ");
        scanf("%d", &wahl);
        if(wahl ==0){
            break;
        }

        
        if(wahl ==1){
            printf("Anzuzeigender Index: %d\n\n", h_index);
            printf("Kundennr.: ");
            scanf("%lld",&nummer);
            printf("Name: ");
            scanf("%s", kdb[h_index].name);
            printf("Geburtsjahr: ");
            scanf("%hd",&kdb[h_index].geb_jahr);
            printf("Geschlecht :");
            scanf("%hu", &kdb[h_index].geschlecht);
            
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

