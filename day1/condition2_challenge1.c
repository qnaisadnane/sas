#include<stdio.h>

int main(){
    int r,d,s;
     printf("entrer un revenu annuel :");
     scanf("%d",&r);
     printf("entrer un score de credit :");
     scanf("%d",&s);
     printf("entrer une duree de pret :");
     scanf("%d",&d);
     if(r>=30000 && s>=700 && d<=10){
        printf("eligible");
     }else if(r>=30000 && s>=650 && d<=15){
     printf("eligible avec condition");
     }else{
        printf("non eligible");
     }
return 0;
}
