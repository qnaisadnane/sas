#include<stdio.h>
#include<ctype.h>
int main(){
	char chaine[100];
	int i,oc=0;
	int l;
	printf("entrer la chaine de caractere : ");
	fgets(chaine,sizeof(chaine),stdin);
	
	for(i=0;i< strlen(chaine);i++){
		if(chaine[i]!= ' '){
			printf("%c",chaine[i]);
		}
	}

	return 0;
}
