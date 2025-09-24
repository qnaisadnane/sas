#include<stdio.h>

int main(){
    int a;
     printf("entrer un nbr :");
     scanf("%d",&a);
     if(a<0){
        printf("le nbr est negatif");
     }else if(a>0){
        printf("le nbr est positif");
     }else{
        printf("le nbr est null");

     }
     return 0;
}