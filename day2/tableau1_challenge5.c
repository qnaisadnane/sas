#include<stdio.h>

int main(){
     int i,n;
     int min;
     printf("entrer la taille du tableau :");
     scanf("%d",&n);
     int T[n];
     printf("entrer un nombre :");
     scanf("%d",&T[0]);
     min=T[0];
    for(i=1;i<n;i++){
        printf("entrer un nombre :");
        scanf("%d",&T[i]);
        if(T[i]<min){
            min=T[i];
        }
    }
     printf("le minimum est : %d",min);
    return 0;
}