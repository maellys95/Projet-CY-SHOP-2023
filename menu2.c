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
    char *name;
    int num; // numéro de référence
    char size;// TROIS TAILLE A DEFINIR 
    float price; // A DEFINIR (PEUT ETRE INUTILE)
    int stocklevel; // TRES IMPORTANT A DEFINIR VOIR DANS GETSTOCK/BUY
} shirt;

Client clients[MAX_CLIENTS];
int numClients = 0;
shirt stock[MAX_STOCK];
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

    /*void ClientMode(Client *client) { // Mode Achat, client
    int codeClient;
    int indexClient;

    printf("Achat de tee-shirt\n");
    printf("Code client : ");
    scanf("%d", &codeClient);

    indexClient = trouverClient(codeClient);

// FONCTIONNE PAS */
    
    
    
}

void ClientMode(){

    int b;
    printf("Interface utilisateur\n");
    //Mettre la fonction fidelisation avec account et delete account
    do{
    printf("Voulez-vous faire des achats ? Tapez 1 si oui et 2 si non.\n");
    scanf("%d", &b);
    vide_buffer();
    } while (b!=1 && b!=2);
    } while(b==1);
        
    
    if(b==2){
        //Remettre la fonction fidélisation avec account et deleteaccount ne pas oublier l'option déconnecter 
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
            ManagingMode();
    }
}

void main() {
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
    scanf("%d", &mode); //Mode choisi

    switch (mode){ // Lancement du mode choisi
        case 0:
            printf("Au revoir !\n");
            exit(0);
        case 1:
            ManagingMode();
        case 2:
            ClientMode();
        break;
        default:
            printf("Choix invalide\n");
            main();
            
    } 
}
    










