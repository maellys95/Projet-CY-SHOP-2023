#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct shirt{
    char name[100];
    int num;
    int stocklevel;
    float price;
    char size;
};


void vide_buffer(){
	while(getchar()!='\n');
	}
    
    
void buy(struct shirt purple, struct shirt red, struct shirt blue, struct shirt green){
    struct shirt a;
    int c, b, x, j, k, l, m, y;
    float t;
    t=0;
    c=0;
    j= purple.stocklevel;
    k= red.stocklevel;
    l=blue.stocklevel;
    m =green.stocklevel; //Stockage des niveaux des stocks d'origine au cas où le client annule la commande
    
    printf("Bienvenue dans notre magasin *^0^*\n Attention ces articles sont presque en rupture de stock :\n");
    if(purple.stocklevel <= 5){
        printf("Il ne reste que %d de Purple\n", purple.stocklevel);
    }
    if(red.stocklevel <= 5){
        printf("Il ne reste que %d de Red\n", red.stocklevel);
    }
    if(blue.stocklevel <= 5){
        printf("Il ne reste que %d de Blue\n", blue.stocklevel);
    }
    if(green.stocklevel <= 5){
        printf("Il ne reste que %d de Green\n", green.stocklevel);
    }
    // Affichage des produits presque en rupture de stock
    do{
    do{
    printf("Que souhaitez-vous acheter ? Tapez le nom du produit.\n");
    scanf("%s", a.name);
    getchar();
    } while ((strcmp(a.name, "purple")!=0) && (strcmp(a.name, "red")!=0) && (strcmp(a.name, "blue")!=0) && (strcmp(a.name, "green")!=0));
    
    
    do{
    printf("Combien en voulez-vous ?\n");
    scanf("%d", &c);
    vide_buffer();
    } while (c<=0); // Pour chaque if, on baisse le stock en fonction de la quantité souhaitée
    
        if (strcmp(a.name, "purple")==0){
            purple.stocklevel = purple.stocklevel-c;
            while(purple.stocklevel<0){
                purple.stocklevel = purple.stocklevel+c; //Si le stock est insuffisant, on affiche la quantité disponible et on repose la question
                printf("Stockage insuffisant !\n Il ne reste que %d de Purple\n", purple.stocklevel);
                printf("Combien en voulez-vous ?\n");
                scanf("%d", &c);
                vide_buffer();
                purple.stocklevel = purple.stocklevel-c;
            }
        printf("Article ajouté au panier avec succès\n");
        t=t+purple.price*c;
        }
        
        if (strcmp(a.name, "red")==0){
        red.stocklevel = red.stocklevel-c;
        while(red.stocklevel<0){
                red.stocklevel = red.stocklevel+c;
                printf("Stockage insuffisant !\n Il ne reste que %d de Red\n", red.stocklevel);
                printf("Combien en voulez-vous ?\n");
                scanf("%d", &c);
                vide_buffer();
                red.stocklevel = red.stocklevel-c;
            }
        printf("Article ajouté au panier avec succès\n");
        t=t+red.price*c;
        }
        
        if (strcmp(a.name, "blue")==0){
        blue.stocklevel = blue.stocklevel-c;
        while(blue.stocklevel<0){
                blue.stocklevel = blue.stocklevel+c;
                printf("Stockage insuffisant !\n Il ne reste que %d de Blue\n", blue.stocklevel);
                printf("Combien en voulez-vous ?\n");
                scanf("%d", &c);
                vide_buffer();
                blue.stocklevel = blue.stocklevel-c;
            }
        printf("Article ajouté au panier avec succès\n");
        t=t+blue.price*c;
        }
        
        if (strcmp(a.name, "green")==0){
        green.stocklevel = green.stocklevel-c;
        while(green.stocklevel<0){
                green.stocklevel = green.stocklevel+c;
                printf("Stockage insuffisant !\n Il ne reste que %d de Green\n", green.stocklevel);
                printf("Combien en voulez-vous ?\n");
                scanf("%d", &c);
                vide_buffer();
                green.stocklevel = green.stocklevel-c;
            }
        printf("Article ajouté au panier avec succès\n");
        t=t+green.price*c;
        }
        
    printf("Votre solde s'élève à %f €\n", t);
     do{
    printf("Voulez-vous acheter d'autres produits ? Tapez 1 si oui et 2 si non.\n");
    scanf("%d", &b);
    vide_buffer();
    } while (b!=1 && b!=2);
    } while(b==1);
        
    
    if(b==2){
       }
       do{
    printf("Votre solde total s'élève à %f €. Confirmez-vous votre achat ?\nTapez 1 si oui et 2 si non.\n",t);
    scanf("%d", &x);
    vide_buffer();
    } while (x!=1 && x!=2);
    if(x==1){
    printf("Merci d'avoir fait vos achats à la Maison du Pull *^0^*\n");
    printf("Retour au Menu Principal\n");
}
    if(x==2){
        do{
        printf("Souhaitez-vous recommencer ?\nTapez 1 si oui et 2 si non.\n");
        scanf("%d", &y);
        vide_buffer();
    } while (y!=1 && y!=2);
            purple.stocklevel=j;//Réinisialisation de toutes les variables
            red.stocklevel=k;
            blue.stocklevel=l;
            green.stocklevel=m;
        if(y==1){
            buy(purple, red, blue, green);
        }
        if(y==2){
            printf("Merci d'avoir visité la Maison du Pull *^0^*\n");
            printf("Retour au Menu Principal\n");
        }
    }
}
    int main(){
    struct shirt purple;
    struct shirt red;
    struct shirt blue;
    struct shirt green;
    purple.stocklevel=9;
    red.stocklevel=4;
    blue.stocklevel=47;
    green.stocklevel=3;
    purple.name=="purple";
    red.name=="red";
    blue.name=="blue";
    green.name=="green";
    purple.price= 25.99;
    red.price= 14.99;
    blue.price= 16.99;
    green.price= 65.99;
    buy(purple, red, blue, green);
    return 0;
    
    }
