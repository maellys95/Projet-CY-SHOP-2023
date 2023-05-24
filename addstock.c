#include <stdio.h>
#include <stdlib.h>
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
    
void augmentedStock(struct shirt purple, struct shirt red, struct shirt blue, struct shirt green){
    struct shirt b;
    int c, t, a;
    t= 80;
    do{
        printf("Ecrivez la référence du produit\n");
        scanf("%d", &b.num);
        vide_buffer();
    }while (b.num != 001 && b.num != 002 && b.num != 003 && b.num != 004);
        
     do{   
        printf("De combien l'augmentez-vous ?\n");
        scanf("%d", &c);
        vide_buffer();
     }while(c<=0);
    switch (b.num){
        case 001:
            while(c+purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel > t){
            printf("Stockage insuffisant -,-\n");
            do{   
                printf("De combien l'augmentez-vous ?\n");
                scanf("%d", &c);
                vide_buffer();
                }while(c<=0);
    }
        purple.stocklevel=purple.stocklevel+c;
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", b.num, purple.stocklevel);
        break;
        
        case 002:
            while(2*c+purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel > t){
            printf("Stockage insuffisant -,-\n");
            do{   
                printf("De combien l'augmentez-vous ?\n");
                scanf("%d", &c);
                vide_buffer();
                }while(c<=0);
    }
        red.stocklevel=red.stocklevel+c;
        a=purple.stocklevel+red.stocklevel*2+blue.stocklevel+green.stocklevel;
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", b.num, red.stocklevel);
        break;
        
        case 003:
            while(3*c+purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel > t){
            printf("Stockage insuffisant -,-\n");
            do{   
                printf("De combien l'augmentez-vous ?\n");
                scanf("%d", &c);
                vide_buffer();
                }while(c<=0);
    }
        blue.stocklevel=blue.stocklevel+c;
        a=purple.stocklevel+red.stocklevel+blue.stocklevel*3+green.stocklevel;
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", b.num, blue.stocklevel);
        break;
        
        case 004:
            while(4*c+purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel > t){
            printf("Stockage insuffisant -,-\n");
            do{   
                printf("De combien l'augmentez-vous ?\n");
                scanf("%d", &c);
                vide_buffer();
                }while(c<=0);
    }
        green.stocklevel=green.stocklevel+c;
        a=purple.stocklevel+red.stocklevel+blue.stocklevel+green.stocklevel*4;
        printf("Le niveau du stock du produit %d est %d pièces restantes.\n", b.num, green.stocklevel);
        break;
    }
    printf("Le niveau du stock total est de %d pièces.\n", a);
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
    purple.name=="purple";
    augmentedStock(purple, red, blue, green);
    return 0;
}
