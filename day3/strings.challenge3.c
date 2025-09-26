#include<stdio.h>

int main(){
	char chaine1[100],chaine2[100];
	printf("entrer la chaine1 : ");
	gets(chaine1);
	printf("entrer la chaine2 : ");
	gets(chaine2);
	
	strcat(chaine1, chaine2);
	printf("apres la concatenation : %s\n ", chaine1);
	return 0;
}
