#include<stdio.h>

int main(){
int i,n;
     printf("entrer la taille du tableau :");
     scanf("%d",&n);
     int T[n];
    for(i=0;i<n;i++){
        printf("entrer un nombre :");
        scanf("%d",&T[i]);
    }
     for(i=0;i<n;i++){
    printf("%d\n",T[i]);
     }
    return 0;
}