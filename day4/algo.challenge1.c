#include <stdio.h>

int temp;

void trieabull(int T[],int taille){
         for(int i=0;i<taille-1;i++){
            for(int j=0;j<taille-i-1;j++){
                if(T[j]>T[j+1]){
                   temp=T[j];
                   T[j]=T[j+1];
                   T[j+1]=temp;
                }
            }
         }
}
void affichage(int T[],int taille){
for(int i=0;i<taille;i++){
        printf("%d\t",T[i]);
}
}

int main(){
int T[]={12,4,9,3,7,15,5};
int taille = 7;

printf("le tableau avant le tri : \n");
affichage(T, taille);
trieabull(T,taille);
printf("\nle tableau apres le tri : \n");
affichage(T,taille);

return 0;
}



















