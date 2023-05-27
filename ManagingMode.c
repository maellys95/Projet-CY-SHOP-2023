#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "menu.h"

struct shirt{
    char *name;
    int num;
    int stocklevel;
    float price;
    char size;
};

void EmptyBuffer(){
    while(getchar()!='\n');
}

void LoginManaging(){
    char password[5];
    int b;
    
    printf("\nMODE GESTION IDENTIFICATION \n");
    printf("Entrez le code d'accès: ");
    scanf("%d",&b);
    EmptyBuffer();
  
    while(b!=1230){
        printf("\nCode Incorrect, Veuillez réesayer\n");
        
        printf("\nMODE GESTION IDENTIFICATION\n");
        printf("Entrez le code d'accès:  \n");
        scanf("%d",&b);
        EmptyBuffer();
    }
  
    if(b==1230){
       
        printf("\nLogin Réussi !\n \n");
       
    }
}


void getStock(struct shirt purple, struct shirt red, struct shirt blue, struct shirt green){
    int a, p, n;
    char *b;
    

    do{
    do{
    printf("Tapez 1 si vous avez le nom du produit ou tapez 2 si vous avez la référence\n");
    scanf("%d", &a); 
    EmptyBuffer();
    }while (a!=1 && a!=2); //On demande si la personne connait la référence ou le nom du produit
    
    if (a==1){
        do{
        printf("Ecrivez le nom du produit\n");
        scanf("%s", b);
        getchar();
        }while(strcmp(b, "purple")!=0 && (strcmp(b, "red")!=0) && (strcmp(b, "blue")!=0) && (strcmp(b, "green")!=0)); //On récupère les noms 
     //On récupère les noms des produits et on affiche le stock correspondant
        
        if (strcmp(b, "purple")==0){
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", purple.name, purple.stocklevel);
        }
        if (strcmp(b, "red")==0){
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", red.name, red.stocklevel);
        }
        if (strcmp(b, "blue")==0){
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", blue.name, blue.stocklevel);
        }
        if (strcmp(b, "green")==0){
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", green.name, green.stocklevel);
        }
        
    }
    if (a==2){
        do{
        printf("Ecrivez la référence du produit\n");
        scanf("%d", &p);
        EmptyBuffer();
        }while (p<=0 || p>4);
        //On récupère les références des produits et on affiche le stock correspondant
        switch (p){
        case 001:
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", purple.name, purple.stocklevel);
        break;
        case 002:
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", red.name, red.stocklevel);
        break;
        case 003:
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", blue.name, blue.stocklevel);
        break;
        case 004:
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", green.name, green.stocklevel);
        break;
    }
    
}
do{
printf("Souhaitez-vous augmenter le stock d'un autre produit ? Tapez 1 si oui et 2 si non.\n");
scanf("%d", &n); 
EmptyBuffer();
a=0;
}while (n!=1 && n!=2);
}while(n==1); //On s'assure que la personne n'a pas un autre stock à vérifier
if(n==2){
}
printf("Le niveau du stock du produit %s est %d pièces restantes.\n", purple.name, purple.stocklevel);
printf("Le niveau du stock du produit %s est %d pièces restantes.\n", red.name, red.stocklevel);
printf("Le niveau du stock du produit %s est %d pièces restantes.\n", blue.name, blue.stocklevel);
printf("Le niveau du stock du produit %s est %d pièces restantes.\n", green.name, green.stocklevel);
printf("Retour au Menu Principal\n"); //On affiche tous les stocks et retour au menu principal
}

void addstock(struct shirt purple, struct shirt red, struct shirt blue, struct shirt green){
    struct shirt b;
    int c, a, q;
    a= 200; //La capacité du magasin est limité à 80
    do{
    do{
        printf("Ecrivez la référence du produit\n");
        scanf("%d", &b.num);
        EmptyBuffer();
    }while (b.num != 001 && b.num != 002 && b.num != 003 && b.num != 004);
        
     do{   
        printf("De combien l'augmentez-vous ?\n");
        scanf("%d", &c);
        EmptyBuffer();
     }while(c<=0); //On demande les informations générales du produit telles que la référence et combien on ajouté=e
    switch (b.num){
        case 001:
            while(c+purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel > a){
            printf("Stockage insuffisant -,-\n"); //On vérifie que qu'il y ait assez de stockage
            do{   
                printf("De combien l'augmentez-vous ?\n");
                scanf("%d", &c);
                EmptyBuffer();
                }while(c<=0);
    }
        purple.stocklevel=purple.stocklevel+c; // On augmente le stock
        a=purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel; // On augmente le stock total du magasin
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", purple.name, purple.stocklevel);
        break;
        
        case 002: //ON répète le processus pour les autres produits
            while(purple.stocklevel+(red.stocklevel+c)*2+blue.stocklevel+green.stocklevel > a){
            printf("Stockage insuffisant -,-\n");
            do{   
                printf("De combien l'augmentez-vous ?\n");
                scanf("%d", &c);
                EmptyBuffer();
                }while(c<=0);
    }
        red.stocklevel=red.stocklevel+c;
        a=purple.stocklevel+red.stocklevel*2+blue.stocklevel+green.stocklevel;
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", red.name, red.stocklevel);
        break;
        
        case 003:
            while(purple.stocklevel+red.stocklevel+(blue.stocklevel+c)*3+green.stocklevel > a){
            printf("Stockage insuffisant -,-\n");
            do{   
                printf("De combien l'augmentez-vous ?\n");
                scanf("%d", &c);
                EmptyBuffer();
                }while(c<=0);
    }
        blue.stocklevel=blue.stocklevel+c;
        a=purple.stocklevel+red.stocklevel+blue.stocklevel*3+green.stocklevel;
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", blue.name, blue.stocklevel);
        break;
        
        case 004:
            while(purple.stocklevel+red.stocklevel+blue.stocklevel+(green.stocklevel+c)*4 > a){
            printf("Stockage insuffisant -,-\n");
            do{   
                printf("De combien l'augmentez-vous ?\n");
                scanf("%d", &c);
                EmptyBuffer();
                }while(c<=0);
    }
        green.stocklevel=green.stocklevel+c;
        a=purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel*4;
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", green.name, green.stocklevel);
        break;
    }
    printf("Le niveau du stock total est de %d pièces.\n", a);
do{
printf("Souhaitez-vous augmenter le stock d'un autre produit ? Tapez 1 si oui et 2 si non.\n");
scanf("%d", &q); 
EmptyBuffer();
}while (q!=1 && q!=2);
}while(q==1); //On s'assure que la personne n'a pas un autre stock à augmenter
if(q==2){
}
printf("Le niveau du stock du produit %s est %d pièces restantes.\n", purple.name, purple.stocklevel);
printf("Le niveau du stock du produit %s est %d pièces restantes.\n", red.name, red.stocklevel);
printf("Le niveau du stock du produit %s est %d pièces restantes.\n", blue.name, blue.stocklevel);
printf("Le niveau du stock du produit %s est %d pièces restantes.\n", green.name, green.stocklevel);
printf("Le niveau du stock total est de %d pièces.\n", a);
printf("Retour au Menu Principal\n"); //On affiche tous les stocks et retour au menu principal
}


void SubstractStock(struct shirt purple, struct shirt red, struct shirt blue, struct shirt green){
    struct shirt b;
    int c, a, q;
    a= 200; //La capacité du magasin est limité à 200
    do{
    do{
        printf("Ecrivez la référence du produit\n");
        scanf("%d", &b.num);
        EmptyBuffer();
    }while (b.num != 001 && b.num != 002 && b.num != 003 && b.num != 004);
        
     do{   
        printf("De combien le baissez-vous ?\n");
        scanf("%d", &c);
        EmptyBuffer();
     }while(c<=0); //On demande les informations générales du produit telles que la référence et combien on ajouté=e
    switch (b.num){
        case 001:
            while(purple.stocklevel-c<0){
            printf("Stockage insuffisant -,-\n"); //On vérifie que qu'il y ait assez de stockage
            do{   
                printf("De combien le baissez-vous ?\n");
                scanf("%d", &c);
                EmptyBuffer();
                }while(c<=0);
    }
        purple.stocklevel=purple.stocklevel-c; // On augmente le stock
        a=purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel; // On augmente le stock total du magasin
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", purple.name, purple.stocklevel);
        break;
        
        case 002: //ON répète le processus pour les autres produits
            while(red.stocklevel-c<0){
            printf("Stockage insuffisant -,-\n");
            do{   
                printf("De combien l'augmentez-vous ?\n");
                scanf("%d", &c);
                EmptyBuffer();
                }while(c<=0);
    }
        red.stocklevel=red.stocklevel-c;
        a=purple.stocklevel+red.stocklevel*2+blue.stocklevel+green.stocklevel;
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", red.name, red.stocklevel);
        break;
        
        case 003:
            while(blue.stocklevel-c<0){
            printf("Stockage insuffisant -,-\n");
            do{   
                printf("De combien l'augmentez-vous ?\n");
                scanf("%d", &c);
                EmptyBuffer();
                }while(c<=0);
    }
        blue.stocklevel=blue.stocklevel-c;
        a=purple.stocklevel+red.stocklevel+blue.stocklevel*3+green.stocklevel;
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", blue.name, blue.stocklevel);
        break;
        
        case 004:
            while(green.stocklevel-c<0){
            printf("Stockage insuffisant -,-\n");
            do{   
                printf("De combien l'augmentez-vous ?\n");
                scanf("%d", &c);
                EmptyBuffer();
                }while(c<=0);
    }
        green.stocklevel=green.stocklevel-c;
        a=purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel*4;
        printf("Le niveau du stock du produit %s est %d pièces restantes.\n", green.name, green.stocklevel);
        break;
    }
    printf("Le niveau du stock total est de %d pièces.\n", a);
do{
printf("Souhaitez-vous baisser le stock d'un autre produit ? Tapez 1 si oui et 2 si non.\n");
scanf("%d", &q); 

}while (q!=1 && q!=2);
}while(q==1); //On s'assure que la personne n'a pas un autre stock à baisser
if(q==2){
}
printf("Le niveau du stock du produit %s est %d pièces restantes.\n", purple.name, purple.stocklevel);
printf("Le niveau du stock du produit %s est %d pièces restantes.\n", red.name, red.stocklevel);
printf("Le niveau du stock du produit %s est %d pièces restantes.\n", blue.name, blue.stocklevel);
printf("Le niveau du stock du produit %s est %d pièces restantes.\n", green.name, green.stocklevel);
printf("Le niveau du stock total est de %d pièces.\n", a);
printf("Retour au Menu Principal\n"); //On affiche tous les stocks et retour au menu principal
}


void ManagingMode() {
    int choix;
    
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
    

    LoginManaging();

    printf("Gestion du magasin\n");
    printf("1. Voir le stock\n");
    printf("2. Ajouter du stock\n");
    printf("3. Supprimer du stock\n");
    printf("0. Quitter\n");
    printf("Choix : ");
    scanf("%d", &choix);
    while(getchar()!='\n'){
    }

    switch (choix) {
        case 0:
            printf("Au revoir !\n");
            break;
        case 1:
            getStock(purple, red, blue, green);// fonction afficher le stock
            break;
        case 2:
            addstock(purple, red, blue, green);//fonction ajouter du stock
            break;
        case 3:
           SubstractStock(purple, red, blue, green); // fonction supprimer du stock
            break;
        default:
            printf("Choix invalide.\n");
            ManagingMode();
            break;
    }
    
}
