#include<stdio.h>

int main(){
	int i=0,longeur=0;
    char caractere[100];
    printf("entrer un caractere :");
    fgets(caractere,sizeof(caractere),stdin);
    while(caractere[i]!='\0'){
    	if(caractere[i]=='\n'){
    		break;
		}
		longeur++;
    	i++;
	}
    
    printf("la longeur est : %d",longeur);
return 0;
}

