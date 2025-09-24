#include<stdio.h>

int main(){
  int n,i,f=1;
  printf("entrer un nombre :");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    f = f * i ;
    
  }
  printf("le factorielle de %d est : %d",n,f);
}
