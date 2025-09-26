#include<stdio.h>

int main(){
	char chaine[100];
	char c;
	int i,oc=0;
	printf("entrer la chaine de caractere : ");
	scanf("%s",&chaine);
    printf("entrer le caractere : ");
    scanf(" %c",&c);
	
	  for(i=0;i<strlen(chaine) ; i++) {
	  	if(chaine[i] == c){
		   oc++;
		  }
	  	
	  }
	  printf("les nombres d'occurence de %c est : %d",c,oc);
	return 0;
}
