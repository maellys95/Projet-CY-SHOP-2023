#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CLIENTS 100
#define MAX_ACHAT 3
#define FILENAME "clients.txt"

typedef struct {
    char nom[50];
    char prenom[50];
    int codeClient;
    int historiqueAchats[MAX_ACHAT];
} Client;

void creerCompteClient() {
    FILE *fichier;
    Client client;

    printf("Création d'un compte client\n");
    printf("Nom : ");
    scanf("%s", client.nom);
    printf("Prénom : ");
    scanf("%s", client.prenom);
    printf("Code client : ");
    scanf("%d", &client.codeClient);

    fichier = fopen(FILENAME, "a");
    if (fichier == NULL) {
        printf("Erreur ouverture du fichier.\n");
        return;
    }

    fwrite(&client, sizeof(Client), 1, fichier);

    fclose(fichier);

    printf("Compte client créé avec succès.\n");
}

void afficherHistoriqueAchats(int codeClient) {
    FILE *fichier;
    Client client;
    int i;

    fichier = fopen(FILENAME, "r");
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    while (fread(&client, sizeof(Client), 1, fichier)) {
        if (client.codeClient == codeClient) {
            printf("Nom : %s\n", client.nom);
            printf("Prénom : %s\n", client.prenom);
            printf("Historique des 3 derniers achats :\n");
            for (i = 0; i < MAX_ACHAT; i++) {
                printf("Achat %d : %d\n", i + 1, client.historiqueAchats[i]);
            }
            fclose(fichier);
            return;
        }
    }

    fclose(fichier);

    printf("Aucun client trouvé avec le code client fourni.\n");
}

void identifierClient() {
    int codeClient;

    printf("Identifiez-vous avec votre code client : ");
    scanf("%d", &codeClient);

    afficherHistoriqueAchats(codeClient);
}

int main() {
    int choix;

    while (1) {
        printf("\n--- Gestion du magasin ---\n");
        printf("1. Créer un compte client\n");
        printf("2. Identifier un client\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 0:
                printf("Au revoir !\n");
                exit(0);
            case 1:
                creerCompteClient();
                break;
            case 2:
                identifierClient();
                break;
            default:
                printf("Choix invalide.\n");
        }
    }

    return 0;
}#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CLIENTS 100
#define MAX_ACHAT 3
#define FILENAME "clients.txt"

typedef struct {
    char nom[50];
    char prenom[50];
    int codeClient;
    int historiqueAchats[MAX_ACHAT];
} Client;

void creerCompteClient() {
    FILE *fichier;
    Client client;

    printf("Création d'un compte client\n");
    printf("Nom : ");
    scanf("%s", client.nom);
    printf("Prénom : ");
    scanf("%s", client.prenom);
    printf("Code client : ");
    scanf("%d", &client.codeClient);

    fichier = fopen(FILENAME, "a");
    if (fichier == NULL) {
        printf("Erreur ouverture du fichier.\n");
        return;
    }

    fwrite(&client, sizeof(Client), 1, fichier);

    fclose(fichier);

    printf("Compte client créé avec succès.\n");
}

void afficherHistoriqueAchats(int codeClient) {
    FILE *fichier;
    Client client;
    int i;

    fichier = fopen(FILENAME, "r");
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    while (fread(&client, sizeof(Client), 1, fichier)) {
        if (client.codeClient == codeClient) {
            printf("Nom : %s\n", client.nom);
            printf("Prénom : %s\n", client.prenom);
            printf("Historique des 3 derniers achats :\n");
            for (i = 0; i < MAX_ACHAT; i++) {
                printf("Achat %d : %d\n", i + 1, client.historiqueAchats[i]);
            }
            fclose(fichier);
            return;
        }
    }

    fclose(fichier);

    printf("Aucun client trouvé avec le code client fourni.\n");
}

void identifierClient() {
    int codeClient;

    printf("Identifiez-vous avec votre code client : ");
    scanf("%d", &codeClient);

    afficherHistoriqueAchats(codeClient);
}

int main() {
    int choix;

    while (1) {
        printf("\n--- Gestion du magasin ---\n");
        printf("1. Créer un compte client\n");
        printf("2. Identifier un client\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 0:
                printf("Au revoir !\n");
                exit(0);
            case 1:
                creerCompteClient();
                break;
            case 2:
                identifierClient();
                break;
            default:
                printf("Choix invalide.\n");
        }
    }

    return 0;
}
