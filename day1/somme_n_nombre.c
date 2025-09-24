#include<stdio.h>

int main(){
  int n,i,s=0;
  printf("entrer un nombre :");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    s = s + i ;
    
  }
  printf("la somme est : %d",s);
}
