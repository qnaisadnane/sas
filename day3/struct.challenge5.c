#include<stdio.h>
#include<string.h>

typedef struct {
float titre;
float auteur;
}Livre

Livre creerLivre(){
	Livre livre;
	strcpy(livre.titre, "ergetrg");
    strcpy(livre.auteur, "dfgdf");
    livre.annee = 1943;
    return livre;
}
void afficherLivre(Livre livre) {
    printf("Titre  : %s\n", livre.titre);
    printf("Auteur : %s\n", livre.auteur);
    printf("Année  : %d\n", livre.annee);
}


int main() {
    Livre monLivre = creerLivre();  

    afficherLivre(monLivre);        

    return 0;
}
