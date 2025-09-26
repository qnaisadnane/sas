#include<stdio.h>

int main(){
    char caractere[100];
    printf("entrer un caractere :");
    fgets(caractere,sizeof(caractere),stdin);
    printf("%s",caractere);
return 0;
}

