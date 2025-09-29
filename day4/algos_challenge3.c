#include <stdio.h>

int temp;

void trieparselection(int T[],int taille){
         for(int i=0;i<taille-1;i++){
                int min=i;
            for(int j=i+1;j<taille;j++){
                if(T[j]>T[min]){
                   min=j;
                }
             int temp=T[j];
             T[j]=T[min];
             T[min]=temp;
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
trieparselection(T,taille);
printf("\nle tableau apres le tri : \n");
affichage(T,taille);

return 0;
}

