#include<stdio.h>

int main(){
    int t,age,d,n;
    float prime_base,prime;
     printf("entrer l'age de conducteur :");
     scanf("%d",&age);
     printf("entrer le type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) :");
     scanf("%d",&t);
     printf("entrer le nbr d'accident :");
     scanf("%d",&n);
     printf("entrer une prime de base :");
     scanf("%f",&prime_base);
     if(age<25){
        prime= prime_base * 1.5;
     }else if(age>=25 && age<=65){
        prime= prime_base * 2;     
    }else if(age<=65){
        prime= prime_base * 1.2;     
    }
    else if(t==1){
        prime= prime * 2;     
    }
    else if(t==2){
        prime= prime * 1.2;     
    }
    else if(t==3){
        prime= prime * 1.1;     
    }
    else if(n>1){
        prime= prime +prime *0.3;     
    }
    printf("la prime d'assurance est : %f",prime);
return 0;
}
