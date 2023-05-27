#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#define FILENAME "clients.txt"


void ManagingMode();
void ClientMode();
int main(){
    int mode;
  
    printf("Bienvenue dans le magasin de tee-shirts Cadéna\n");
    printf("Tapez:\n");
    printf("0: Quitter\n");
    printf("1: Mode Gestion\n");
    printf("2: Mode Achat\n");
    scanf("%d",&mode);
    while(getchar()!='\n'){
    }
    
    switch (mode){ // Lancement du mode choisi
        case 0:
            printf("Au revoir !\n");
        break;
        case 1:
            ManagingMode();
            main();//ok
        break;
        case 2:
            ClientMode();
            main();//ok
        break;
        default:
            printf("Choix invalide\n");
            main();
        
    } 
    
    return 0;
         
    }
