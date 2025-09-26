#include<stdio.h>
#include<ctype.h>
int main(){
	char chaine[100];
	
	int i,oc=0;
	int l;
	printf("entrer la chaine de caractere : ");
	scanf("%s",&chaine);
	l=strlen(chaine);
	for(i = 0; i < strlen(chaine); i++){
	
    chaine[i]=tolower(chaine[i]);
	
    }
    printf("la chaine en minuscule : %s\n",chaine);
	return 0;
}
