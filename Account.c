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
    
    printf("Votre nom ?\n");
    scanf("%s",&name);
    printf("Votre nom de Famille ?");
    scanf("%s",&lastname);
    printf("Bienvenue chez Umid Inc. %s %s\n",name,lastname^);
   
    id= rand() %1000; //On suppose qu'on a moins de 1000 clients
    file=fopen(("%s",name),"w");
    fprintf(file,"id = %d",id);
    fprintf("name = %s",name);
    fclose(file);
    
}

int main(){
    
    CreateAccount(1);
    
    return 0;
}
