#include<stdio.h>

struct Etudiant{
char nom[100];
char prenom[100];
int  note[5];
};

int main(){
	int i;
	struct Etudiant e={"ahmed","alami",17};
	printf("entrer un nom :");
	scanf("%s",&e.nom);
	printf("entrer un prenom :");
	scanf("%s",&e.prenom);
	for(i=0;i<5;i++){
	printf("entrer une note :");
	scanf("%d",&e.note[i]);
}
	printf("le nom est :%s\n",e.nom);
	printf("le prenom est :%s\n",e.prenom);
	printf("les notes sont :");
	for(i=0;i<5;i++){
	printf("%d\n",e.note[i]);
}
	return 0;
}
