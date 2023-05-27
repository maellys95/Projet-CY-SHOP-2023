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
        printf("Entrez le code d'accès:  \n");
        scanf("%d",&b);
        EmptyBuffer();
    }
  
    if(b==1230){
       
        printf("\nLogin Réussi !\n \n");
       
    }
   return 0;
   
    
}
