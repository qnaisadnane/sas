#include<stdio.h>

int main(){
  int n,i,r=0;
  printf("entrer un nombre :");
  scanf("%d",&n);

  while(n>0){
    printf("%d",n%10);
    n=n/10;
  }
  

  return 0;
}