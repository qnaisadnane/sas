#include<stdio.h>

int main(){
  int n,i,s=0;
  printf("entrer un nombre :");
  scanf("%d",&n);

  for(i=1;i<=n*2;i++){
    if(i%2!=0){
      printf("%d\t",i);
    }
  }
}
