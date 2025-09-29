#include <stdio.h>

int recherchelineaire(int T[],int taille,int n){
    for(int i=0;i<taille;i++)
        if(n==T[i])
    return i;

    return -1;
}

int main(){
int T[]={1,8,9,4,10,6,99};
int taille=7;
int n=99;

for(int i=0;i<taille;i++)
    printf("%d\n",T[i]);

int resultat=recherchelineaire(T,taille,n);
if(resultat == -1){
printf("le nombre %d ne se trouve pas",n);
}else{
printf("le nombre %d se trouve",n);
}

}




