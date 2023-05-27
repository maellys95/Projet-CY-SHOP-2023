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




void buy(struct shirt purple, struct shirt red, struct shirt blue, struct shirt green){
    char *g;
    int c, b, x, j, k, l, m, y;
    float t;
    
    t=0;
    c=0;
    j= purple.stocklevel;
    k= red.stocklevel;
    l=blue.stocklevel;
    m =green.stocklevel; //Stockage des niveaux des stocks d'origine au cas où le client annule la commande
    
    printf("Bienvenue dans notre magasin *^0^*\n Attention ces articles sont presque en rupture de stock :\n");
    do{
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
    printf("Que souhaitez-vous acheter ? Tapez le nom du produit.\n");
    scanf("%s", g);
    getchar();
    } while ((strcmp(g, "purple")!=0) && (strcmp(g, "red")!=0) && (strcmp(g, "blue")!=0) && (strcmp(g, "green")!=0));
    
    
    do{
    printf("Combien en voulez-vous ?\n");
    scanf("%d", &c);
    while(getchar()!='\n'){
    }
    } while (c<=0); // Pour chaque if, on baisse le stock en fonction de la quantité souhaitée
    
        if (strcmp(g, "purple")==0){
            purple.stocklevel = purple.stocklevel-c;
            while(purple.stocklevel<0){
                purple.stocklevel = purple.stocklevel+c; //Si le stock est insuffisant, on affiche la quantité disponible et on repose la question
                printf("Stockage insuffisant !\n Il ne reste que %d de Purple\n", purple.stocklevel);
                printf("Combien en voulez-vous ?\n");
                scanf("%d", &c);
                while(getchar()!='\n'){
    }
                purple.stocklevel = purple.stocklevel-c;
            }
        printf("Article ajouté au panier avec succès\n");
        t=t+purple.price*c;
        }
        
        if (strcmp(g, "red")==0){
        red.stocklevel = red.stocklevel-c;
        while(red.stocklevel<0){
                red.stocklevel = red.stocklevel+c;
                printf("Stockage insuffisant !\n Il ne reste que %d de Red\n", red.stocklevel);
                printf("Combien en voulez-vous ?\n");
                scanf("%d", &c);
                while(getchar()!='\n'){
    }
                red.stocklevel = red.stocklevel-c;
            }
        printf("Article ajouté au panier avec succès\n");
        t=t+red.price*c;
        }
        
        if (strcmp(g, "blue")==0){
        blue.stocklevel = blue.stocklevel-c;
        while(blue.stocklevel<0){
                blue.stocklevel = blue.stocklevel+c;
                printf("Stockage insuffisant !\n Il ne reste que %d de Blue\n", blue.stocklevel);
                printf("Combien en voulez-vous ?\n");
                scanf("%d", &c);
                while(getchar()!='\n'){
    }
                blue.stocklevel = blue.stocklevel-c;
            }
        printf("Article ajouté au panier avec succès\n");
        t=t+blue.price*c;
        }
        
        if (strcmp(g, "green")==0){
        green.stocklevel = green.stocklevel-c;
        while(green.stocklevel<0){
                green.stocklevel = green.stocklevel+c;
                printf("Stockage insuffisant !\n Il ne reste que %d de Green\n", green.stocklevel);
                printf("Combien en voulez-vous ?\n");
                scanf("%d", &c);
                while(getchar()!='\n'){
    }
                green.stocklevel = green.stocklevel-c;
            }
        printf("Article ajouté au panier avec succès\n");
        t=t+green.price*c;
        }
        
    printf("Votre solde s'élève à %f €\n", t);
     do{
    printf("Voulez-vous acheter d'autres produits ? Tapez 1 si oui et 2 si non.\n"); //On s'assure que le client n' pas d'autres achats à faire

    scanf("%d", &b);
    while(getchar()!='\n'){
    }
    } while (b!=1 && b!=2);
    } while(b==1);
        
    
    if(b==2){
       }
       do{
    printf("Votre solde total s'élève à %f €. Confirmez-vous votre achat ?\nTapez 1 si oui et 2 si non.\n",t); 
    //On s'assure que le client confirme son achat

    scanf("%d", &x);
    while(getchar()!='\n'){
    }
    } while (x!=1 && x!=2);
    if(x==1){
    printf("Merci d'avoir fait vos achats à la Maison du Pull *^0^*\n");
    printf("Retour au Menu Principal\n");
}
    if(x==2){
        do{
        printf("Souhaitez-vous recommencer ?\nTapez 1 si oui et 2 si non.\n");
        scanf("%d", &y);
        while(getchar()!='\n'){
    }
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



char* ConvChar(int a,char *b){
    sprintf(b,"%d",a);
    //printf("Chaine=%s",b);
    return b;
}





void CreateAccount(){
    char name[20];
    char lastname[20];
    int id;
    FILE* file;
    char BuyHistory[100];
    char tmp[6];
    char space[2]={' '};
    
    
    
    printf("Votre nom ?\n");
    scanf("%s",name);
    printf("Votre nom de Famille ?");
    scanf("%s",lastname);
    printf("Bienvenue chez Umid Inc. %s \n",name);
   
    srand(time(NULL));
    
    id= rand() %1000;//On suppose qu'on a moins de 1000 clients
    
    
    
    ConvChar(id,tmp);
    file=fopen(("%s",tmp),"w");
    
    fputs(("name = %s\n",name),file);
    fputs(("%s",space),file);
    fputs(("lastname = \n%s   \n",lastname),file);
    //ATTENTION IL COLLE LES 2 NOMS

    fprintf(file,"\nid = %d",id);
    
    
    
    printf("\n Voici votre ID : %d",id);
    printf("\n Tachez de vous en souvenir !");
    
    printf("\n \n Votre inscription est finalisée\n"); // fichier client crée

    fclose(file);
    
}

void DeleteAccount(){
    
    
    int a;
    int id;
    char name[20];
    char tmp[5];
    char tmp2[5];
    int del;
    char filename[10];
    FILE* file;
    

    do{
    printf("Entrez votre ID: ");
    scanf("%d",&id);
   while(getchar()!='\n'){
    }
    }while (id<0 || id>1000);
    printf("id: %d",id);
    
    ConvChar(id,tmp);
    
    file=fopen(("%s",tmp),"r");//ouvrir le fichier et recup le nom
    
    fscanf(file,"%s",tmp);
    //fscanf("\n %s",name);
    
    
printf("Voulez-vous vraiment vous désincrire et supprimer votre compte ?\n"); 

   do{ printf("Répondez par \n 1 pour oui\n 0 pour non\n");
    scanf("%d",&a);
    while(getchar()!='\n'){
    }
   }while(a>2 || a<0);
    
    if(a==0){  // il se passe r
        exit(1);
    }
    if(a==1){
       
        printf("Entrez de nouveau votre ID: ");
        scanf("%s", filename);
        del=remove(filename);
        
        
        if (del==0){
        printf("Votre compte a été supprimé. \n");//name à redéclarer dans void
        printf("Au revoir !\n");
        }
        else{
            printf("Erreur, le fichier n'a pas été supprimé");
        }
        //supp le fichier CA MARCHE PAS ENCORE
        fclose(file);
    }

}


void ClientMode(){
    
    int choix;
    int id;
    int b;
    
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

    do{
    printf("Avez-vous un compte ? Tapez 1 si oui et 2 si non.\n");
    scanf("%d", &b);
    while(getchar()!='\n'){
    }
    } while (b!=1 && b!=2);
    
    if(b==1){
    do{
    printf("Entrez votre ID: ");
    scanf("%d",&id);
    while(getchar()!='\n'){
    }
    }while (id != 26 && id != 958);
    }
    
    if(b==2){
        CreateAccount();
    }
    //SHOW HISTORY
    printf("Choisissez votre action :\n");
    printf("1. Achat\n");
    printf("2. Supprimer mon compte\n");
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
            buy(purple, red, blue, green);
            break;
        case 2:
            DeleteAccount();
            break;
        default:
            printf("Choix invalide.\n");
            ClientMode();
    }
}
