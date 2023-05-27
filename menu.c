#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#define FILENAME "clients.txt"



int main() {
    int mode, b;
  
    printf("Bienvenue dans le magasin de tee-shirts Cadéna\n");
    printf("Tapez:\n");
    printf("0: Quitter");
    printf("1: Mode Gestion");
    printf("2: Mode Achat");
    scanf("%d",&mode);
    
    switch (mode){ // Lancement du mode choisi
        case 0:
            printf("Au revoir !\n");
            exit(0);
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
