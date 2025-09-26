#include<stdio.h>
#include<ctype.h>
int main(){
	char chaine[100];
	char souschaine[100];
	int i,oc=0;
	int l;
	printf("entrer la chaine de caractere : ");
	fgets(chaine,sizeof(chaine),stdin);
	printf("entrer la sous chaine : ");
	fgets(souschaine,sizeof(souschaine),stdin);
	if(strstr(chaine,souschaine)!=NULL){
		printf("la sous chaine est presente");
	}else{
		printf("la sous chaine n'est pas presente");
	}
	return 0;
}
