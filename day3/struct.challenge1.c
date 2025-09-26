#include<stdio.h>

struct Personne{
char nom[100];
char prenom[100];
int age;
};

int main(){
	struct Personne p={"ahmed","alami", 25};
	printf("entrer un nom :");
	scanf("%s",&p.nom);
	printf("entrer un prenom :");
	scanf("%s",&p.prenom);
	printf("entrer un age :");
	scanf("%d",&p.age);
	
	printf("le nom est :%s\n",p.nom);
	printf("le prenom est :%s\n",p.prenom);
	printf("l'age est :%d\n",p.age);
	return 0;
}
