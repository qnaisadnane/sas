#include<stdio.h>

int main(){
    float n;
     printf("entrer une note :");
     scanf("%f",&n);
     if(n<0 || n>20){
       printf("entrer une note "); 
     }else if(n<10){
        printf("recale");
     }else if(n>=10 && n<12){
        printf("passable");
     }else if(n>=12 && n<14){
        printf("assez bien");
     }else if(n>=14 && n<16){
        printf("tres bien");
     }else if(n>=16){
        printf("tres bien");
     }
     return 0;
}