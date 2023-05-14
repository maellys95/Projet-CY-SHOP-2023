#include <stdio.h>
#include <stdlib.h>

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





void CreateAccount(int a){
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
   
    
    
    id= rand() %1000;//On suppose qu'on a moins de 1000 clients
    
    ConvChar(id,tmp);
    file=fopen(("%s",tmp),"w");
    
    fputs(("name = %s\n",name),file);
    fprintf(file,"\nid = %d",id);
    
    printf("\n \n Votre inscription est finalisée\n"); // fichier client crée

    fclose(file);
    
}

void DeleteAccount(int id){
    
    int a;
    
    char tmp[5];
    FILE* file;
    
    ConvChar(id);
    
    file=fopen(("%s",tmp),"r"); //ouvrir le fichier et recup le nom
    
    
    
printf("Voulez-vous vraiment vous désincrire et supprimer votre compte ?\n"); 

   do{ printf("Répondez par \n 1 pour oui\n 0 pour non");
    scanf("%d",&a);
    EmptyBuffer();
   }while(a<2 || a=>0);
    
    if(a==0){  // il se passe r
        exit(1);
    }
    if(a==1){
        
        printf("Au revoir %s ",name) //name à redéclarer dans void
        remove(file);  //supp le fichier (à tester)S
    }

    
    
    
}


int main(){
    
    CreateAccount(1);
    
    
    
    return 0;
}
