#include<stdio.h>

int main(){
     int i,n,j,temp;
     printf("entrer la taille du tableau :");
     scanf("%d",&n);
     int T[n];
    for(i=0;i<n;i++){
     printf("entrer un nombre : ");
     scanf("%d",&T[i]);
    }
    for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(T[i]>T[j]){
            temp=T[i];
            T[i]=T[j];
            T[j]=temp;
        }     
        }
        }
        for(i=0;i<n;i++){
        printf("%d\n",T[i]);
        }
    return 0;
}