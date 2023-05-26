#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    
/*void EmptyBuffer(){
    while(getchar()!='\n');
}

void SubstractStock(struct Tshirt){
    int a;
    char model;
    int tmp;
    
   do{ printf("Voulez vous réduire le stock d'un article ?");
    printf("Tapez 1 pour OUI");
    printf("Tapez 2 pour NON");
    scanf("%d",&a); //recupere la réponse 
    EmptyBuffer(); //EViter le crash si qqun entre un chae
   }while(a<0 || a>1);
   
   if(a==1){
       
       /*printf("Choisir l'article concerné\n Notez sa RÉFERENCE");
       scanf("%d",&reference);
       EmptyBuffer();*/
       
       //Ref en int mais comment identifier les tshirts au modèle ?? TABLEAU ??
       
      /* printf("Entrez le model du shirt");
       scanf("%s",&model);
       print("Combien en reste t-il");
       scanf("%d",&tmp);

       ("%s",model).stocklevel=tmp;  
       //Il veut pas prendre en compte "model" comme nom de structure
       printf("Bien modifié, il en reste %d",tmp);
       
    //baisser le stock 
    }
    else{
        exit(1);
    }

}
*/

void SubstractStock(struct shirt purple, struct shirt red, struct shirt blue, struct shirt green){
    struct shirt b;
    int c, a, q;
    a= 200; //La capacité du magasin est limité à 200
    do{
    do{
        printf("Ecrivez la référence du produit\n");
        scanf("%d", &b.num);
        vide_buffer();
    }while (b.num != 001 && b.num != 002 && b.num != 003 && b.num != 004);
        
     do{   
        printf("De combien le baissez-vous ?\n");
        scanf("%d", &c);
        vide_buffer();
     }while(c<=0); //On demande les informations générales du produit telles que la référence et combien on ajouté=e
    switch (b.num){
        case 001:
            while(purple.stocklevel-c<0){
            printf("Stockage insuffisant -,-\n"); //On vérifie que qu'il y ait assez de stockage
            do{   
                printf("De combien le baissez-vous ?\n");
                scanf("%d", &c);
                vide_buffer();
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
                vide_buffer();
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
                vide_buffer();
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
                vide_buffer();
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
vide_buffer();
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
    SubstractStock(purple, red, blue, green);
    
    return 0;
    
}
