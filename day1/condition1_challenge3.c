#include<stdio.h>

int main(){
    int a,b,s;
     printf("entrer un nbr :");
     scanf("%d",&a);
     printf("entrer un nbr :");
     scanf("%d",&b);
     s=a+b;
     if(a==b){
        s=(a+b)*3;
     }
     printf("la somme est %d",s);
return 0;
}
