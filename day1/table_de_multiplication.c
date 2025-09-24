#include<stdio.h>

int main(){
  int n,i,s;
  printf("entrer un nombre :");
  scanf("%d",&n);
  for(i=0;i<=10;i++){
    s = n * i ;
    printf("%d * %d = %d\n",n,i,s);
  }
}
