
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void EmptyBuffer(){
    while(getchar()!='\n');
}

/*char ConvChar(int a,char b){
    
    sprintf(b,"%d",a);
    printf("Chaine=%s",b);
   
    
    return b;
    
}*/


void ShowHistory(){
    FILE* file;
    int id;
    char tmp[6];
    
    do{
        printf("Entrez votre ID");
        scanf("%d",&id);
        EmptyBuffer();
    } while (id==0 || id>10000);
        
        
        // mettre une protection contre les entrées non int

        //ConvChar(id,tmp);           //Convertir ID en char REVOIR 
        //printf("ID CONVERTIT =%s",tmp);
        
        file=fopen(("%d",id),"w");  // ouvrir le fichier avec l'id ou le nom ?'
        
        if (file == NULL){ //check si le fichier est bien crée
            printf("Erreur lors de l'ouverture du fichier");
        }
        
        fprintf(file,"Bienv No %d",id); // verif
        
        for (int i=0;i=<5;i++{          //Lecture des achats !
            fscanf(file,"%s",str[0]);
        
        fclose(file);
        
    }
    
    
int main(){
    
    ShowHistory();
    
    
    return 0;
}
    
    
