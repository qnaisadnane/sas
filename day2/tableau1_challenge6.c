#include<stdio.h>

int main(){
int i,n,f,s;
     printf("entrer la taille du tableau :");
     scanf("%d",&n);
     printf("entrer le facteur :");
     scanf("%d",&f);
     int T[n];
    for(i=0;i<n;i++){
        printf("entrer un nombre :");
        scanf("%d",&T[i]);
        
    }

     for(i=0;i<n;i++){
        s=f*T[i];
        printf("%d\n",s);
    }
    return 0;
}