#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct shirt{
    char *name;
    int num;
    int stocklevel;
    float price;
    char size;
};
void vide_buffer(){
	while(getchar()!='\n');
	}
void getStock(struct shirt purple, struct shirt red, struct shirt blue, struct shirt green){
    int a, p, n;
    char *b;

    do{
    do{
    printf("Tapez 1 si vous avez le nom du produit ou tapez 2 si vous avez la référence\n");
    scanf("%d", &a); 
    vide_buffer();
    }while (a!=1 && a!=2); //On demande si la personne connait la référence ou le nom du produit
    
    if (a==1){
        do{
        printf("Ecrivez le nom du produit\n");
        scanf("%s", b);
        getchar();
        }while(strcmp(b, "purple")!=0 && (strcmp(b, "red")!=0) && (strcmp(b, "blue")!=0) && (strcmp(b, "green")!=0)); //On récupère les noms desproduits et on affiche le stock correspondant
        
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
        vide_buffer();
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
vide_buffer();
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
int main(){
    struct shirt purple;
    struct shirt red;
    struct shirt blue;
    struct shirt green;
    purple.stocklevel=9;
    red.stocklevel=4;
    blue.stocklevel=47;
    green.stocklevel=7;
    purple.name= strdup("purple");
    red.name=strdup("red");
    blue.name=strdup("blue");
    green.name=strdup("green");
    getStock(purple, red, blue, green);
    return 0;
};
