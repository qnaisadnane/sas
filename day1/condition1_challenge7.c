#include<stdio.h>

int main(){
    char c;
     printf("entrer un caractere :");
     scanf(" %c",&c);
     if(c>=65 && c<90){
        printf("majuscule");
     }else{
        printf("miniscule");
     }
     return 0;
}