#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name;
    int ref;
    int stock;
    float price;
    char size;
}Tshirt;



int GetStock(Tshirt test){      //fonction GetStock
    printf("%d",test.stock);
    
}


int main(){
    Tshirt prout; //déclaration d'un tshirt
    prout.stock=15; // stock du tshirt en question
    
    Getstock(prout);
}
