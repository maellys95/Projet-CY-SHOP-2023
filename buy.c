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
    int c, b;
    float t;
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
    printf("Que souhaitez-vous acheter ? Tapez le nom du produit.\n");
    scanf("%s", a.name);
    vide_buffer();
    printf("Combien en voulez-vous ?\n");
    scanf("%d", &c);
    vide_buffer();
        if (strcmp(a.name, "purple")==0){
            purple.stocklevel = purple.stocklevel-c;
            while(purple.stocklevel<0){
                purple.stocklevel = purple.stocklevel+c;
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
    printf("Voulez-vous acheter d'autres produits ? Tapez 1 si oui et 2 si non.\n");
    scanf("%d", &b);
    vide_buffer();
    if(b==1){
        while(b==1){
    printf("Que souhaitez-vous acheter ? Tapez le nom du produit.\n");
    scanf("%s", a.name);
    vide_buffer();
        printf("Combien en voulez-vous ?\n");
        scanf("%d", &c);
        vide_buffer();
        if (strcmp(a.name, "purple")==0){
            purple.stocklevel = purple.stocklevel-c;
            while(purple.stocklevel<0){
                purple.stocklevel = purple.stocklevel+c;
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
    printf("Voulez-vous acheter d'autres produits ? Tapez 1 si oui et 2 si non.\n");
    scanf("%d", &b);
        }
    } 
       if(b==2){
       }
    printf("Votre solde s'élève à %f €\n Merci d'avoir fait vos achats à la Maison du Pull *^0^*\n", t);
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
};
