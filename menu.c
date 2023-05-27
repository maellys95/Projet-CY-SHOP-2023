#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CLIENTS 100
#define MAX_STOCK 1000
#define FILENAME "clients.txt"

typedef struct {
    char nom[50];
    char prenom[50];
    int codeClient;
    int fidelite;
} Client;

struct shirt{
    char *name;
    int num;
    int stocklevel;
    float price;
    char size;
};
    struct shirt purple;
    struct shirt red;
    struct shirt blue;
    struct shirt green;

void EmptyBuffer(){
    while(getchar()!='\n');
}
    

int main() {
    int mode, b;
    int codeClient;
    int indexClient;
    FILE* file;

    printf("Bienvenue dans le magasin de tee-shirts !\n");
    do{
    printf("Avez-vous un compte ? Tapez 1 si oui et 2 si non.\n");
    scanf("%d", &b);
    vide_buffer();
    } while (b!=1 && b!=2);
    if(b==1){
    
        do{
    printf("Entrez votre ID: ");
    scanf("%d",&id);
    EmptyBuffer();
    }while (id =! 26 && id =! 958);
    
        if(id==26){
            file=fopen("26.txt", "r");
    }
        if(id==958){
            file=fopen("26.txt", "r");
        }
    }
    
    if(b==2){
        CreateAccount();
    }
    printf("Choisissez le mode :\n");
    printf("1. Achat\n");
    printf("2. Supprimer mon compte\n");
    printf("0. Quitter\n");
    printf("Choix : ");
    scanf("%d", &mode);
    switch (choix) {
        case 0:
            printf("Au revoir !\n");
            exit(0);
        case 1:
            buy(purple, red, blue, green);
            break;
        case 2:
            DeleteAccount();
            break;
        default:
            printf("Choix invalide.\n");
            Clientmode();
    }

    printf("Choisissez le mode :\n");
    printf("1. Gestion du magasin\n");
    printf("2. Achat\n");
    printf("0. Quitter\n");
    printf("Choix : ");
    scanf("%d", &mode);

    switch (mode){
        case 0:
            printf("Au revoir !\n");
            exit(0);
        case 1:
            
            break;
        case 2:
            //fonction ajouter du stock
            break;
        default:
            printf("Choix invalide.\n");
            main();
    }
    
