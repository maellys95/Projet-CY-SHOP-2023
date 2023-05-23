#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    char name;
    int ref;
    int stock;
    float price;
    char size;
}Tshirt;



void EmptyBuffer(){
    while(getchar()!='\n');
}

char* ConvChar(int a,char* b){
    
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
    EmptyBuffer();
    }while (id<0 || id>1000);
    
    
    ConvChar(id,tmp);
    
    file=fopen(("%s",tmp),"r");//ouvrir le fichier et recup le nom
    
    fscanf(file,"%s",tmp);
    //fscanf("\n %s",name);
    
    
printf("Voulez-vous vraiment vous désincrire et supprimer votre compte ?\n"); 

   do{ printf("Répondez par \n 1 pour oui\n 0 pour non\n");
    scanf("%d",&a);
    EmptyBuffer();
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
        
        fclose(file);
    }

}


int main(){
    
    CreateAccount();
    DeleteAccount();
    
    
    return 0;
}
