#include<stdio.h>

int main(){
	char chaine[100];
	int i,j,temp;
	printf("entrer la chaine : ");
	gets(chaine);
       
	
	  strrev(chaine);
	  printf("la chaine inverse : %s",chaine);
	  
	return 0;
}
