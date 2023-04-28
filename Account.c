#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name;
    int ref;
    int stock;
    float price;
    char size;
}Tshirt;


void CreateAccount(int a){
    char name[20];
    char lastname[20];
    int id;
    FILE* file;
    char BuyHistory[100];
    
    printf("Votre nom ?\n");
    scanf("%s",name);
    printf("Votre nom de Famille ?");
    scanf("%s",lastname);
    printf("Bienvenue chez Umid Inc. %s \n",name);
   
    
    
    id= rand() %1000; //On suppose qu'on a moins de 1000 clients
    file=fopen(("%s",name),"w");
    
    fputs(("name = %s\n",name),file);
    fprintf(file,"\nid = %d",id);
    
    printf("\n \n Votre inscription est finalisée\n"); // fichier client crée

    fclose(file);
    
}

void DeleteAccount(int id){
    
    char a[4]="oui";
    char b[4]"non";
    char answer[4];
    FILE* file;
    
    file=fopen(("%d",id),"w"); //ouvrir le fichier et recup le nom
    fscanf 
    
    
printf("Voulez-vous vraiment vous désincrire et supprimer votre compte ?\n"); 

    printf("Répondez par [oui/non]");
    
    if(answer==b){  // il se passe r
        exit(1);
    }
    if(answer==a){
        
        printf("Au revoir %s ",name) //name à redéclarer dans void
        remove(file);  //supp le fichier (à tester)S
    }

    
    
    
}


int main(){
    
    CreateAccount(1);
    
    
    
    return 0;
}
