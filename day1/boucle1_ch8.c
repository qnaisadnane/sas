#include<stdio.h>

int main(){
  int a=0,b=1,c,n,i;
  printf("entrer un nombre :");
  scanf("%d",&n);
  do{
   c=a+b;
   b=c;
   a=b;
  }while(n<0);
  printf("%d",c);
  
  

  return 0;
}