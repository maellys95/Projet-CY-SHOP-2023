#include <stdio.h>
#include <stdlib.h>

Struct T-shirt {
Char name[100];
Int reference;
Int stocklevel;
Float price;
Char size;
} Tshirt

void EmptyBuffer(){
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
       
       printf("Entrez le model du shirt");
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


int main{
    
    struct shirt purple;
    struct shirt red;
    struct shirt blue;
    struct shirt green;
    
    SubstractStock();
    
    return 0;
    
}
