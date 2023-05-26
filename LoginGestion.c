#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



void EmptyBuffer(){
    while(getchar()!='\n');
}




int main(){
    
    char password[5];
    int b;
    
    
    printf("\nMODE GESTION IDENTIFICATION \n");
    printf("Entrez le code d'accès: ");
    scanf("%d",&b);
    EmptyBuffer();
   
    
    while(b!=1230){
        printf("\nCode Incorrect, Veuillez réesayer\n");
        
        printf("\nMODE GESTION IDENTIFICATION\n");
        printf("Entrez le code d'accès: ");
        scanf("%d",&b);
        EmptyBuffer();
    }
   
    
    if(b==1230){
       //MenuGestion()
        printf("\nLogin Réussi !\n \n");
       printf("     Menu Gestion\n \n");
       printf("Tapez 1 pour ajouter du stock \n");
       printf("Tapez 2 pour obtenir le stock d'un article \n");
       printf("Tapez 3 pour supprimer un article \n");
    }
    
        
    

   return 0;
   
    
}
