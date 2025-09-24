#include<stdio.h>

int main(){
    char l;
     printf("entrer un lettre:");
     scanf(" %c",&l);
     switch(l){
        case'a':
        printf("voyelle");
        break;
        case'o':
        printf("voyelle");
        break;
        case'u':
        printf("voyelle");
        break;
        case'i':
        printf("voyelle");
        break;
        case'y':
        printf("voyelle");
        break;
         case'e':
        printf("voyelle");
        break;
        default:
        printf("n'est pas voyelle");
        break;
     }
    
     return 0;
}