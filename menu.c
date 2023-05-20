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

typedef struct {
    char taille[3];// TROIS TAILLE A DEFINIR 
    float prix; // A DEFINIR (PEUT ETRE INUTILE)
    int quantite; // TRES IMPORTANT A DEFINIR 
} TeeShirt;

Client clients[MAX_CLIENTS];
int numClients = 0;
TeeShirt stock[MAX_STOCK];
int numArticles = 0;

void creerCompteClient() {
    Client client;

    printf("Création d'un compte client\n");
    printf("Nom : ");
    scanf("%s", client.nom);
    printf("Prénom : ");
    scanf("%s", client.prenom);
    printf("Code client : ");
    scanf("%d", &client.codeClient);
    printf("Compte de fidélité (0: Non, 1: Oui) : ");
    scanf("%d", &client.fidelite);

    clients[numClients++] = client;

    printf("Compte client créé avec succès.\n");
}

int trouverClient(int codeClient) {
    int i;
    for (i = 0; i < numClients; i++) {
        if (clients[i].codeClient == codeClient) {
            return i;
        }
    }
    return -1;
}

// FAIRE CAS OU COMPTE N'EXISTE PAS 

void achat(Client *client) {
    int codeClient;
    int indexClient;

    printf("Achat de tee-shirt\n");
    printf("Code client : ");
    scanf("%d", &codeClient);

    indexClient = trouverClient(codeClient);

// FONCTIONNE PAS 
    
    
    
}

void gestionMagasin() {
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
            // fonction afficher le stock
            break;
        case 2:
            //fonction ajouter du stock
            break;
        case 3:
            // fonction supprimer du stock
            break;
        default:
            printf("Choix invalide.\n");
    }
}

int main() {
    int mode;
    int codeClient;
    int indexClient;
    Client client;

    printf("Bienvenue dans le magasin de tee-shirts !\n");

    printf("Choisissez le mode :\n");
    printf("1. Gestion du magasin\n");
    printf("2. Achat\n");
    printf("0. Quitter\n");
    printf("Choix : ");
    scanf("%d", &mode);

    switch (mode);
    }
    
