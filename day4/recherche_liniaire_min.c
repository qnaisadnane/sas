#include<stdio.h>
int recherchemax(int T[],int taille){
 int min=T[0];
 for(int i=1;i<taille;i++)
    if(T[i]<min)
        min=T[i];
         return min;



 return -1;

}
int main(){
int T[]={4,9,1,81,7,6,2,3};
int taille=8;

for(int i=0;i<taille;i++){
    printf("%d\n",T[i]);
}

int resultat = recherchemax(T,taille);

if(resultat==-1){

}else{
printf("le min est : %d",resultat);
}

}















