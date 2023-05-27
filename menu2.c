#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu2.h"




/*Client clients[MAX_CLIENTS];

TeeShirt stock[MAX_STOCK];
int numArticles = 0;*/


int Find(int codeClient) {
    int i;
    int numClients = 0;
    for (i = 0; i < numClients; i++) {
        if (Client[i].codeClient == codeClient) {
            return i;
        }
    }
    return -1;
}

void ManagingMode() { //MOde Gestion
    int choix;

    printf("Gestion du magasin\n");
    printf("1. Voir le stock\n");
    printf("2. Ajouter du stock\n");
    printf("3. Supprimer du stock\n");
    printf("0. Quitter\n");
    printf("Choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 0:
            printf("Au revoir !\n");
            exit(0);
        case 1:
            getstock();
            break;
        case 2:
            AddStock();//fonction ajouter du stock
            break;
            // fonction supprimer du stock
        default:
            printf("Choix invalide.\n");
    }
}



void ClientMode(Client *client) { // Mode Achat, client
    int codeClient;
    int indexClient;

    printf("Achat de tee-shirt\n");
    printf("Code client : ");
    scanf("%d", &codeClient);

    indexClient = Find(codeClient);
}






int main() {
    int mode;
    int codeClient;
    int indexClient;
    Client* client;

    
    // Le MAIN DOIT ETRE EN VOID SI ON VEUT FAIRE DES RETOURS DE MENUS!!!!!
    printf("Bienvenue dans le magasin de tee-shirts !\n");

    printf("Choisissez le mode :\n");
    printf("1. Gestion du magasin\n");
    printf("2. Achat\n");
    printf("0. Quitter\n");
    printf("Choix : ");
    scanf("%d", &mode); //Mode choix

    switch (mode){ // Lancement du mode choisi
        case 0:
            printf("Au revoir !\n");
            exit(0);
        case 1:
            ManagingMode();
        case 2:
            ClientMode(client);
        break;
        default:
            printf("Choix invalide\n");
            
            
    } 
    
    return 0;
} 
    










