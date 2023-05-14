
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void EmptyBuffer(){
    while(getchar()!='\n');
}

char* ConvChar(int a,char* b){
    
    sprintf(b,"%d",a);
    //printf("Chaine=%s",b);
   
    
    return b;
    
}

/*void ReadHistory(){
   FILE* file;           
   char a[20];
   char b[20];

   
    fscanf(file,"%s\n",a);
    fscanf(file,"%s\n",b);
   printf("%s\n",a);
   printf("%s\n",b);
   
   
   
}*/


void ShowHistory(){
    FILE* file;
    int id;
    char tmp[6];
    char a[20];
    char b[20];
    char c[20];
    char d[20];
    char e[20];
    char f[20];
    char g[20];
    char h[20];
    
    do{
        printf("Entrez votre ID: ");
        scanf("%d",&id);
        EmptyBuffer();
    } while (id==0 || id>10000);
        
        
        // mettre une protection contre les entrées non int

        ConvChar(id,tmp);           //Convertir ID en char REVOIR 
        //printf("ID CONVERTIT =%s\n",tmp);//Vérif ConvCHar
        
        file=fopen(("%s",tmp),"r");// ouvrir le fichier avec l'id
        
        if (file == NULL){ //check si le fichier est bien crée
            printf("Erreur lors de l'ouverture du fichier");
        }
        
        
        
        fscanf(file,"%s\n",a);
        fscanf(file,"%s\n",b);
        fscanf(file,"%s\n",c);
        fscanf(file,"%s\n",d);
        fscanf(file,"%s\n",e);
        fscanf(file,"%s\n",f);
        fscanf(file,"%s\n",g);
        fscanf(file,"%s\n",h);
        
        
        printf("Vos derniers achats: \n");
        
        printf("%s ",a);
        printf("%s",b);
        ;printf("\n%s ",c);
        printf("%s\n",d);
        printf("%s ",e);
        printf("%s\n",f);
        printf("%s ",g);
        printf("%s\n",h);

//ENORME pavé mais ça marche, eventuellement trouver un moyen de le réduire

        
    
        
        
        
        
        //fprintf(file,"id: %d",id); // verif
        
        //Lecture des achats 
        //for (int i=0;i<=5;i++){
            
            
            
        
        
        fclose(file);
        
    }

    
    
int main(){
    
    ShowHistory();
    
    
    return 0;
}
    
    
