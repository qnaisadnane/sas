#include<stdio.h>

int main(){
     int i,n;
     int max;
     printf("entrer la taille du tableau :");
     scanf("%d",&n);
     int T[n];
     printf("entrer un nombre :");
     scanf("%d",&T[0]);
     max=T[0];
    for(i=1;i<n;i++){
        printf("entrer un nombre :");
        scanf("%d",&T[i]);
        if(T[i]>max){
            max=T[i];
        }
    }
     printf("le maximum est : %d",max);
    return 0;
}