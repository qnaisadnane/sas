#include<stdio.h>

int main(){
  int n,i=0;
  printf("entrer un nombre positif :");
  scanf("%d",&n);
  
  do{
    i++;
     n=n/10;
  }while(n!=0);
  printf("%d",i);

  return 0;
}