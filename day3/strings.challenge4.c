#include<stdio.h>

int main(){
	char chaine1[100],chaine2[100];
	printf("entrer la chaine1 : ");
	gets(chaine1);
	printf("entrer la chaine2 : ");
	gets(chaine2);
	
	  if(strcmp(chaine1,chaine2)==0){
	  	printf("les chaines sont egaux ");
	  }else{
	  	printf("les chaines ne sont pas egaux");
	  }
	return 0;
}
