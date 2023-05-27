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
    
    
    
    
    
    struct shirt purple;
    struct shirt red;
    struct shirt blue;
    struct shirt green;
    purple.stocklevel=9;
    red.stocklevel=4;
    blue.stocklevel=47;
    green.stocklevel=3;
    purple.name= strdup("purple");
    red.name=strdup("red");
    blue.name=strdup("blue");
    green.name=strdup("green");
    purple.price= 25.99;
    red.price= 14.99;
    blue.price= 16.99;
    green.price= 65.99;
    buy(purple, red, blue, green);
    getStock(purple, red, blue, green);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    Client clients[MAX_CLIENTS];
int numClients = 0;
TeeShirt stock[MAX_STOCK];
int numArticles = 0;
