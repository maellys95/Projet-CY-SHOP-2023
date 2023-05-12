#include <stdio.h>
struct shirt{
    char name[100];
    int num;
    int stocklevel;
    float price;
    char size;
};
void augmentedStock(){
    int c, t, a;
    struct shirt b;
    struct shirt purple;
    struct shirt red;
    struct shirt blue;
    struct shirt green;
    purple.stocklevel=9;
    red.stocklevel=4;
    blue.stocklevel=47;
    green.stocklevel=7;
    t= 80;
    printf("Ecrivez la référence du produit\n");
    scanf("%d", &b.num);
    printf("De combien l'augmentez-vous ?\n");
    scanf("%d", &c);
    switch (b.num){
        case 001:
            if (c+purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel > t){
        printf("Stockage insuffisant -,-\n");
        break;
    }
        purple.stocklevel=purple.stocklevel+c;
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", b.num, purple.stocklevel);
        break;
        case 002:
            if (2*c+purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel > t){
        printf("Stockage insuffisant -,-\n");
        break;
    }
        red.stocklevel=red.stocklevel+2*c;
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", b.num, red.stocklevel);
        break;
        case 003:
        if (3*c+purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel > t){
        printf("Stockage insuffisant -,-\n");
        break;
    }
        blue.stocklevel=blue.stocklevel+3*c;
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", b.num, blue.stocklevel);
        break;
        case 004:
        if (4*c+purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel > t){
        printf("Stockage insuffisant -,-\n");
        break;
    }
        green.stocklevel=green.stocklevel+4*c;
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", b.num, green.stocklevel);
        break;
    }
    a=purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel;
    printf("Le niveau du stock total est de %d pièces.\n", a);
}
int main(){
    augmentedStock();
    return 0;
}
