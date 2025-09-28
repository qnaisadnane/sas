#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct contact{
    char nom[40];
    char tel[20];
    char email[50];
}Contacts;


int n = 10;
Contacts contact[]={{"ahmed" ,"0654789123","ahmed@gmail.com"},
                    {"mohamed" ,"0654789123","mohamed@gmail.com"},
                    {"ali" ,"0654789123","ali@gmail.com"},
                    {"sara" ,"0654789123","sara@gmail.com"},
                    {"aya" ,"0654789123","aya@gmail.com"},
                    {"yassine" ,"0654789123","yassine@gmail.com"},
                    {"badr" ,"0654789123","badr@gmail.com"},
                    {"rachid" ,"0654789123","rachid@gmail.com"},
                    {"houssam" ,"0654789123","houssam@gmail.com"},
                    {"chaima" ,"0654789123","chaima@gmail.com"},};


void creerContact();
void afficherContact();
int rechercherContact();
void modifierContact();
void supprimerContact();
int validerTelephone(const char tel[]);
int validerEmail(const char email[]);


int validerTelephone(const char tel[]) {
    int len = strlen(tel);

    if (len != 10) return 0;
    if (tel[0] != '0' || (tel[1] != '6' && tel[1] != '7')) return 0;

    for (int j = 0; j < len; j++) {
        if (!isdigit((unsigned char)tel[j])) {
            return 0;
        }
    }
    return 1;
}


int validerEmail(const char email[]) {

    return (strchr(email, '@') != 0);
}



void creerContact() {
    int nb_aj;
    printf("entrer le nombre de contact que tu veux ajouter : ");
    if (scanf("%d", &nb_aj) != 1) {
        printf("Entree invalide.\n");
        while (getchar() != '\n');
        return;
    }
    getchar();

    for (int i = 0; i < nb_aj; i++) {
        printf("\n--- Contact N %d ---\n", n + 1);

        printf("entrer un nom du contact N %d : ", n + 1);
        fgets(contact[n].nom, sizeof(contact[n].nom), stdin);
        contact[n].nom[strcspn(contact[n].nom, "\n")] = '\0';


        do {
            printf("entrer un numero du telephone du contact N %d : ", n + 1);
            if (fgets(contact[n].tel, sizeof(contact[n].tel), stdin) == 0) continue;
            contact[n].tel[strcspn(contact[n].tel, "\n")] = '\0';

            if (validerTelephone(contact[n].tel)==0) {
                printf("Numero de telephone invalide. Veuillez reessayer.\n");
            }
        } while (validerTelephone(contact[n].tel==0));


        do {
            printf("entrer un email du contact N %d : ", n + 1);
            if (fgets(contact[n].email, sizeof(contact[n].email), stdin) == 0) continue;
            contact[n].email[strcspn(contact[n].email, "\n")] = '\0';

            if (validerEmail(contact[n].email)==0) {
                printf("Adresse email invalide. Veuillez reessayer.\n");
            }
        } while (validerEmail(contact[n].email)==0);

        printf("contact cree avec succes !\n");
        n++;
    }
}


void afficherContact() {
    printf("NOM\t\tNUMERO DE TELEPHONE\t\tEMAIL\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%s\t%s\n", contact[i].nom, contact[i].tel, contact[i].email);
    }
}


int rechercherContact() {
    char recherche[40];

    printf("entrer le nom du contact a rechercher : ");

    if (fgets(recherche, sizeof(recherche), stdin) == 0) {
        return -1;
    }

    recherche[strcspn(recherche, "\n")] = '\0';

    for (int i = 0; i < n; i++) {
        if (strcmp(contact[i].nom, recherche) == 0) {
            printf("----------------------------------------\n");
            printf("Le contact est trouve !\n");
            printf("NOM\t\tNUMERO DE TELEPHONE\t\tEMAIL\n");
            printf("%s\t%s\t%s\n", contact[i].nom, contact[i].tel, contact[i].email);
            printf("----------------------------------------\n");
            return i;
        }
    }

    printf("Le contact n'existe pas !\n");
    return -1;
}


void modifierContact() {

    int index = rechercherContact();


    if (index != -1) {
        getchar();
        printf("\n********MODIFICATION DU CONTACT **********\n");


        printf("entrer le nouveau nom : ", contact[index].nom);
        fgets(contact[index].nom, sizeof(contact[index].nom), stdin);
        contact[index].nom[strcspn(contact[index].nom, "\n")] = '\0';

        do {
            printf("entrer le nouveau numero de telephone : ");
            if (fgets(contact[index].tel, sizeof(contact[index].tel), stdin) == 0) continue;
            contact[index].tel[strcspn(contact[index].tel, "\n")] = '\0';

            if (validerTelephone(contact[index].tel)==0) {
                printf("numero de telephone invalide. Veuillez reessayer.\n");
            }
        } while (validerTelephone(contact[index].tel)==0);


        do {
            printf("entrer le nouveau email : ");
            if (fgets(contact[index].email, sizeof(contact[index].email), stdin) == NULL) continue;
            contact[index].email[strcspn(contact[index].email, "\n")] = '\0';

            if (validerEmail(contact[index].email)==0) {
                printf("Adresse email invalide. Veuillez reessayer.\n");
            }
        } while (validerEmail(contact[index].email)==0);


        printf("Contact modifie avec succes !\n");

    } else {

    }
}


void supprimerContact() {
    char choix2[5];


    int index = rechercherContact();
    getchar();

    if (index != -1) {
        printf("COMFIRMATION DE SUPPRESION\n");
        printf("est ce que vous voulez supprimer ce contact ? (oui/non) : ");


        if (fgets(choix2, sizeof(choix2), stdin) == 0) return;
        choix2[strcspn(choix2, "\n")] = '\0';


        for(int i = 0; choix2[i]; i++) {
            choix2[i] = tolower((unsigned char)choix2[i]);
        }

        if (strcmp(choix2, "oui") == 0) {
            for (int j = index; j < n - 1; j++) {

                strcpy(contact[j].nom, contact[j + 1].nom);
                strcpy(contact[j].tel, contact[j + 1].tel);
                strcpy(contact[j].email, contact[j + 1].email);
            }
            n--;
            printf("le compte est supprime !\n");
        } else if (strcmp(choix2, "non") == 0) {
            printf("suppression annullee\n");
        }
    } else {

    }
}



void main(){
    int choix;

    do{
        system("cls");
        printf("*************GESTION DES CONTACTS****************\n");
        printf("1.CREER UN CONTACT\n");
        printf("2.AFFICHER UN CONTACT\n");
        printf("3.CHERCHER UN CONTACT\n");
        printf("4.MODIFIER UN CONTACT\n");
        printf("5.SUPPRIMER UN CONTACT\n");
        printf("0.QUITTER\n");
        printf("ENTRER VOTRE CHOIX: ");
        scanf("%d",&choix);
        getchar();

        switch(choix){
            case 0:
                printf("au revoir\n");
                break;
            case 1:
                system("cls");
                creerContact();
                system("PAUSE");
                break;
            case 2:
                system("cls");
                afficherContact();
                system("PAUSE");
                break;
            case 3:
                system("cls");
                rechercherContact();
                system("PAUSE");
                break;
            case 4:
                system("cls");
                modifierContact();
                system("PAUSE");
                break;
            case 5:
                system("cls");
                supprimerContact();
                system("PAUSE");
                break;
            default:
                printf("entrer un choix de 1 a 5\n");
                system("PAUSE");
                break;
        }
    } while(choix != 0);
}
