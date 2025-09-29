#include<stdio.h>
int recherchedichotomie(int T[],int taille,int x,int sup,int inf){

        while( sup>= inf ){
        int milieu=(sup+inf)/2;
       if(x==T[milieu]){
        return milieu;
       }else if(x>T[milieu]){
        inf=milieu+1;
       }else {
         sup=milieu-1;
       }
       return -1;
   }
}

int main(){
    int T[]={9,10,48,2,8,6,4,7,3,8,11};
    int taille=11;
    int x=4;
    for(int i=0;i<taille;i++)
    printf("%d\t",T[i]);

    int resultat=recherchedichotomie(T,taille,x,0,taille-1);

     if(resultat==-1){
        printf("le nombre %d n'est pas dans la table",x);
     }else{
     printf("le nombre %d est dans la table",x);
     }
}




