#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



/*int main(){  //Convertir int en char
    int x=20;
    char no[10];
    
    sprintf(no,"%d",x);
    printf("Chaine : %s \n",no);
    
    return 0;
}*/


int main(){
   FILE* file;
   char a[20];
   char b[20];
   
   file=fopen("Test.txt","w");
   fputs("Yasmine MOUKHLISS",file);
   
   fclose(file);
    
   file=fopen("Test.txt","r");
    fscanf(file,"%s\n",a);
    fscanf(file,"%s\n",b);
   printf("%s\n",a);
   printf("%s\n",b);
   
   
   fclose(file);

   return 0;
   
    
    
}
