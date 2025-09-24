#include<stdio.h>

int main(){
int i,n,s=0;
     printf("entrer la taille du tableau :");
     scanf("%d",&n);
     int T[n];
    for(i=0;i<n;i++){
        printf("entrer un nombre :");
        scanf("%d",&T[i]);
        s=s+T[i];
    }
     printf("la somme total est %d",s);
    return 0;
}