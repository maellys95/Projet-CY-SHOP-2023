#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
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
void getStock(struct shirt purple, struct shirt red, struct shirt blue, struct shirt green){
    int a;
    struct shirt b;
    printf("Tapez 1 si vous avez le nom du produit ou tapez 2 si vous avez la référence\n");
    scanf("%d", &a);
    if (a==1){
        printf("Ecrivez le nom du produit\n");
        scanf("%s", b.name);
        vide_buffer();
        if (strcmp(b.name, "purple")==0){
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", purple.num, purple.stocklevel);
        }
        if (strcmp(b.name, "red")==0){
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", red.num, red.stocklevel);
        }
        if (strcmp(b.name, "blue")==0){
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", purple.num, purple.stocklevel);
        }
        if (strcmp(b.name, "green")==0){
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", purple.num, purple.stocklevel);
        }
        
    }
    if (a==2){
        printf("Ecrivez la référence du produit\n");
        scanf("%d", &b.num);
        vide_buffer();
        switch (b.num){
        case 001:
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", b.num, purple.stocklevel);
        break;
        case 002:
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", b.num, red.stocklevel);
        break;
        case 003:
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", b.num, blue.stocklevel);
        break;
        case 004:
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", b.num, green.stocklevel);
        break;
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
    green.stocklevel=7;
    getStock(purple, red, blue, green);
    return 0;
};
