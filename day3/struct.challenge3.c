#include<stdio.h>

struct Rectangle{
float langeur;
float largeur;
};
float CalculeAir(float a,float b){
	return a*b;
}

int main(){
	struct Rectangle r={12,17};
	printf("entrer la langeur:");
	scanf("%f",&r.langeur);
	printf("entrer la largeur :");
	scanf("%f",&r.largeur);
	CalculeAir(r.langeur,r.largeur);

	printf("la longeur est :%f\n",r.langeur);
	printf("le largeur est :%f\n",r.largeur);
	printf("l'aire est : %f",CalculeAir(r.langeur,r.largeur));
	
	return 0;
}
