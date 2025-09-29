#include<stdio.h>
int recherchemax(int T[],int taille){
 int max=T[0];
 for(int i=1;i<taille;i++)
    if(T[i]>max)
        max=T[i];
         return max;



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
printf("le max est : %d",resultat);
}

}





