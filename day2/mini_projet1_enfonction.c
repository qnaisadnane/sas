#include <stdio.h>
#include <string.h>
    int choix;
    char titre[100][100];
    char auteur[100][100];
    int quantite[100];
    float prix[100];
    int i, n = 0;
    char recherche[100];
    int trouve;
 
void AjouterLivre(){
                printf("Entrer le titre du livre : ");
                scanf(" %s", titre[n]);

                printf("Entrer l'auteur du livre : ");
                scanf(" %s", auteur[n]);

                printf("Entrer le prix du livre : ");
                scanf("%f", &prix[n]);

                printf("Entrer la quantite du livre : ");
                scanf("%d", &quantite[n]);
                n++;
}

void AfficherLivre(){
    if (n == 0) {
    printf("Aucun livre disponible.\n");
    } else {
    for (i = 0; i < n; i++) {
                        printf("\nLivre %d\n", i + 1);
                        printf("Titre     : %s\n", titre[i]);
                        printf("Auteur    : %s\n", auteur[i]);
                        printf("Prix      : %.2f\n", prix[i]);
                        printf("Quantite  : %d\n", quantite[i]);
                    }
                }
}
void ChercherLivre(){
    printf("Entrer le titre du livre à chercher : ");
                scanf("%s", recherche);
                trouve = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        printf("\nLivre trouvé :\n");
                        printf("Titre    : %s\n", titre[i]);
                        printf("Auteur   : %s\n", auteur[i]);
                        printf("Prix     : %.2f\n", prix[i]);
                        printf("Quantite : %d\n", quantite[i]);
                        trouve = 1;
                        break;
                    }
                }
                if (!trouve) {
                    printf("Le livre n'existe pas.\n");
                }
}
void MAJQuantite(){
                printf("Entrer le titre du livre à modifier : ");
                scanf(" %s", recherche);
                trouve = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        printf("Ancienne quantite : %d\n", quantite[i]);
                        printf("Entrer la nouvelle quantite : ");
                        scanf("%d", &quantite[i]);
                        printf("Quantite mise à jour.\n");
                        trouve = 1;
                        break;
                    }
                }
                if (!trouve) {
                    printf("Le livre n'existe pas.\n");
                }
}
void SupprimerLivre(){
       printf("entrer le titre du livre a supprimer : ");
                scanf(" %s", recherche);
                trouve = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        for (int j = i; j < n - 1; j++) {
                            strcpy(titre[j], titre[j + 1]);
                            strcpy(auteur[j], auteur[j + 1]);
                            prix[j] = prix[j + 1];
                            quantite[j] = quantite[j + 1];
                        }
                        n--;
                        printf("Livre supprimé.\n");
                        trouve = 1;
                        break;
                    }
                }
                if (!trouve) {
                    printf("Livre non trouvé.\n");
                }
}
void AfficherTotal(){
     int total = 0;
    for (i = 0; i < n; i++) {
    total += quantite[i];
    }
    printf("Le nombre total de livres en stock est : %d\n", total);
}
int main() {  
    do {
        printf("\n*********** MENU ***********\n");
        printf("1. Ajouter un livre au stock.\n");
        printf("2. Afficher tous les livres disponibles.\n");
        printf("3. Rechercher un livre par son titre.\n");
        printf("4. Mettre a jour la quantite d'un livre.\n");
        printf("5. Supprimer un livre du stock.\n");
        printf("6. Afficher le nombre total de livres en stock.\n");
        printf("7. Quitter.\n");
        printf("Entrer votre choix : ");
        scanf("%d", &choix); 
        switch (choix) {
            case 1:
                AjouterLivre();
                break;
            case 2:
                AfficherLivre();
                break;
            case 3:
                ChercherLivre();
                break;
            case 4:
                MAJQuantite();
                break;
            case 5:
                SupprimerLivre();
                break;
            case 6:
                AfficherTotal();
                break;
            case 7:
                printf("Au revoir.\n");
                break;
            default:
                printf("Erreur : choix invalide.\n");
                break;
        }
    } while (choix>7);
    return 0;
}
