#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


typedef struct{
int id;
char nom[30];
char espece[30];
int age;
char habitat[30];
int poids;
}animals;

int compteur = 0;
int n=20;
int idcourant;

animals animal[]={{1,"alex","tigre",5,"jungle",14},
                  {2,"oscar","lion",8,"jungle",25},
                  {3,"oscar","giraphe",2,"desert",160},
                  {4,"bobo","gazelle",3,"savana",15},
                  {5,"croco","crocodile",4,"aquatique",30},
                  {6,"soso","gazelle",1,"jungle",9},
                  {7,"aze","lion",9,"desert",10},
                  {8,"azer","crocodile",10,"aquatique",24},
                  {9,"momo","gazelle",27,"desert",200},
                  {10,"zozo","lion",20,"savana",22},
                  {11,"dodo","crocodile",15,"desert",31},
                  {12,"toto","tigre",11,"savana",10},
                  {13,"titi","tigre",21,"savana",18},
                  {14,"lili","giraphe",7,"savana",380},
                  {15,"lolo","tigre",22,"desert",27},
                  {16,"jojo","giraphe",25,"savana",390},
                  {17,"jiji","lion",24,"desert",26},
                  {18,"dodo","giraphe",26,"savana",250},
                  {19,"didi","lion",23,"desert",21},
                  {20,"koko","gazelle",17,"jungle",8},};

   void ajouter();
   void affiche();
   void recherche();
   void modifier();
   void supprimer();
   void statistiques();
   void verifiernom(char nom[]);
   void verifierespece(char espece[]);
   void verifierhabitat(char habitat[]);
   void verifierage(int age);
   void verifierpoids(int poids);
   void ajouterplusanimal();
   void ajouteranimal();
   void afficheranimaux();
   void trierparnom();
   void trierparage();
   void afficherparhabitat();
   void affiche();
   void rechercheparid();
   void rechercheparnom();
   void rechercherparespece();
   void modifierage();
   void modifierhabitat();


void verifiernom(char nom[]) {
    int valide = 0;
    do {
        printf("Nom (3-30 lettres) : ");
        scanf("%s", nom);

        valide = 1;

        // Verifier longueur
        int len = strlen(nom);
        if (len < 3 || len > 30) {
            printf("nom invalide ! utiliser des lettres de (3 a 30).\n");
            valide = 0;
        }
        // Verifier que ce sont que des lettres
        for (int i = 0; nom[i] != '\0'; i++) {
            if (!((nom[i] >= 'a' && nom[i] <= 'z') || (nom[i] >= 'A' && nom[i] <= 'Z'))) {
                printf("nom invalide ! utilisez uniquement des lettres.\n");
                valide = 0;
                break;
            }
        }

    } while (!valide);
}

void verifierespece(char espece[]) {
    int choixespece;
    do {
            choixespece = 0;
        printf("Choisir l'espece :\n");
        printf("1. Lion\n2. Crocodile\n3. Tigre\n4. Giraphe\n5. Elephant\n Votre choix : ");
        scanf("%d", &choixespece);
        getchar();
        switch(choixespece){
        case 1:
        strcpy(espece, "lion");
        break;
        case 2:
        strcpy(espece, "crocodile");
        break;
        case 3:
        strcpy(espece, "tigre");
        break;
        case 4:
        strcpy(espece, "giraphe");
        break;
        case 5:
        strcpy(espece, "elephant");
        break;
        default:
        printf("Espece non valide\n");
        }
    } while (choixespece < 1 || choixespece > 5);
}

void verifierhabitat(char habitat[]) {
    int choixhabitat;
    do {
        choixhabitat=0;
        printf("Choisir l'habitat :\n");
        printf("1. Aquatique\n2. Jungle\n3. Savane\n4. Desert\nVotre choix : ");
        scanf("%d", &choixhabitat);
        getchar();
        switch(choixhabitat){
        case 1:
        strcpy(habitat, "aquatique");
        break;
        case 2:
        strcpy(habitat, "jungle");
        break;
        case 3:
        strcpy(habitat, "savane");
        break;
        case 4:
        strcpy(habitat, "desert");
        break;
        default:
        printf("habitat non valide");
        break;
        }
    } while (choixhabitat < 1 || choixhabitat > 4);
}

void verifierage(int age) {
    do {
            printf("Age (1-40) : ");
            scanf("%d", &animal[n].age);
            getchar();
            if (animal[n].age < 1 || animal[n].age > 40) {
                printf("age invalide ! (doit etre entre 1 et 40).\n");
            }

        } while (animal[n].age < 1 || animal[n].age > 40);
}

void verifierpoids(int poids) {
    do {
            printf("Poids (kg, >0) : ");
            scanf("%d", &animal[n].poids);
            if (animal[n].poids <= 0) {
                printf("poids invalide ! etrer un nombre positif.\n");
            }
        } while (animal[n].poids <= 0);
}

void ajouteranimal(){
 int nb_ajoute;
 int i;
 printf("*************AJOUTER UN ANIMAL******************\n");
        animal[n].id = idcourant++;

        printf("\n--- Ajout Animal %d ---\n", n+1);

        verifiernom(animal[n].nom);

        verifierespece(animal[n].espece);

        verifierage(animal[n].age);

        verifierhabitat(animal[n].habitat);

        verifierpoids(animal[n].poids);

        n++;

        printf("l'animal est ajoute avec succes !\n");
 }

void ajouterplusanimal(){
 int nb_ajoute;
 int i;
 printf("*************AJOUTER PLUSIEURS ANIMAL******************\n");
 printf("Combien le nombre des animaux que tu veux ajouter :");
 scanf("%d", &nb_ajoute);
        for(int i=0 ;i<nb_ajoute;i++){
         ajouteranimal();
        }
 }

void ajouter(){
    int choixajout;
    do{
 printf("*************GESTION D'AJOUT******************\n");
 printf("1.AJOUTER UN ANIMAL\n");
 printf("2.AJOUTER PLUSIEURS ANIMAUX\n");
 printf("0.QUITTER\n");
 printf("entrer votre choix :");
 scanf("%d",&choixajout);
 switch(choixajout){
        case 1:
        system("cls");
        ajouteranimal();
        system("PAUSE");
        break;
        case 2:
        system("cls");
        ajouterplusanimal();
        system("PAUSE");
        break;
        case 0:
        printf("Au revoir\n");
        break;
        default:
        printf("entrer un nombre de 0 a 2");
        break;
 }
}while(choixajout!=0);
}

 void afficheranimaux() {
    int i;
    printf("\n--- Liste des animaux ---\n");
    for (i = 0; i < n; i++) {

            printf("ID: %d | Nom: %s | Espece: %s | Age: %d | Habitat: %s | Poids: %d\n",
                   animal[i].id, animal[i].nom, animal[i].espece,
                   animal[i].age, animal[i].habitat, animal[i].poids);
}
 }
 void trierparnom(){
    int i, j,tmp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(animal[i].nom, animal[j].nom) > 0) {
                animals tmp = animal[i];
                animal[i] = animal[j];
                animal[j] = tmp;
            }
        }
    }
    afficheranimaux();
}

void trierparage() {
    int i, j,tmp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (animal[i].age > animal[j].age) {
                animals tmp = animal[i];
                animal[i] = animal[j];
                animal[j] = tmp;
            }
        }
    }
    afficheranimaux();
}

void afficherparhabitat() {
    char hab[30];

    printf("Entrez l'habitat : ");
    scanf("%s", hab);
    int i;
    printf("\n--- Animaux de l'habitat %s ---\n", hab);
    for (i = 0; i < n; i++) {
        if (strcmp(animal[i].habitat, hab) == 0) {
            printf("ID: %d | Nom: %s | Espece: %s | Age: %d | Poids: %d\n",
                   animal[i].id, animal[i].nom, animal[i].espece,
                   animal[i].age, animal[i].poids);
        }
    }
}

void affiche(){
    int choixaffiche;
    do{
        system("cls");
 printf("*************GESTION D'AFFICHAGE******************\n");
 printf("1.AFFICHER TOUS LES ANIMAUX\n");
 printf("2.AFFICHER PAR ORDRE ALPHABETIQUE\n");
 printf("3.AFFICHER DE PETIT VERS LE GRAND AGE\n");
 printf("4.AFFICHER L'HABITAT\n");
 printf("0.QUITTER\n");
 printf("entrer votre choix :");
 scanf("%d",&choixaffiche);
 switch(choixaffiche){
        case 1:
        system("cls");
        afficheranimaux();
        system("PAUSE");
        break;
        case 2:
        system("cls");
        trierparnom();
        system("PAUSE");
        break;
        case 3:
        system("cls");
        trierparage();
        system("PAUSE");
        break;
        case 4:
        system("cls");
        afficherparhabitat();
        system("PAUSE");
        break;
        case 0:
        printf("Au revoir\n");
        break;
        default:
        printf("entrer un nombre de 0 a 4");
        break;
 }
}while(choixaffiche!=0);
}

void rechercheparid(){
    int id;
        printf("ID : ");
        scanf("%d", &id);
        for (int i = 0; i < n; i++) {
            if (animal[i].id == id) {
                printf("Trouve : Nom %s ,Espece %s, Age %d, Habitat %s, Poids %d\n",
                       animal[i].nom, animal[i].espece, animal[i].age, animal[i].habitat,animal[i].poids);
            }
        }
}
void rechercheparnom(){
        char texte[30];
        printf("Texte a rechercher : ");
        scanf("%s", texte);
        for (int i = 0; i < n; i++) {
        if (strcmp(animal[i].nom, texte) == 0){
                    printf("Trouve : ID %d ,Espece %s, Age %d, Habitat %s, Poids %d\n",animal[i].id,
                        animal[i].espece, animal[i].age, animal[i].habitat,animal[i].poids);

                }

        }
}
void rechercherparespece(){
        char texte[30];
        printf("Texte a rechercher : ");
        scanf("%s", texte);
        for (int i = 0; i < n; i++) {
        if (strcmp(animal[i].espece, texte) == 0){
        printf("Trouve : ID %d ,Nom %s, Age %d, Habitat %s, Poids %d\n",animal[i].id,
        animal[i].nom, animal[i].age, animal[i].habitat,animal[i].poids);
                }
        }
}

void recherche(){
    int choixrecherche;
    do{
 printf("*************GESTION DE RECHERCHE******************\n");
 printf("1.RECHERCHER PAR ID\n");
 printf("2.RECHERCHER PAR NOM\n");
 printf("3.RECHERCHER PAR ESPECE\n");
 printf("0.QUITTER\n");
 printf("entrer votre choix :");
 scanf("%d",&choixrecherche);
 switch(choixrecherche){
        case 1:
        system("cls");
        rechercheparid();
        system("PAUSE");
        break;
        case 2:
        system("cls");
        rechercheparnom();
        system("PAUSE");
        break;
        case 3:
        system("cls");
        rechercherparespece();
        system("PAUSE");
        break;
        case 0:
        printf("Au revoir\n");
        break;
        default:
        printf("entrer un nombre de 0 a 3");
        break;
 }
}while(choixrecherche!=0);
}

void modifierhabitat(){
        int id, i;
        int trouve=0;
        printf("Entrez l'ID de l'animal a modifier : ");
        if (scanf("%d", &id)!=1){
        printf("erreur de saisie de l'id\n");
        return;
        }
        for (int i = 0; i < n; i++) {
        if (animal[i].id == id){
            trouve=1;
        printf("l'animal est trouve !\n");
        printf("Modifier l'habitat : ");
        scanf("%s", animal[i].habitat);
        }
        }
        if(trouve!=0){
        printf("l'animal est modifier avec succes\n");}
        else{
            printf("choix invalide");
        }

}
void modifierage(){
        int id, i;
        int trouve=0;
        printf("Entrez l'ID de l'animal a modifier : ");
        if (scanf("%d", &id)!=1){
            printf("erreur de saisie de l'id\n");
            return;
        }
        for (int i = 0; i < n; i++) {
        if (animal[i].id == id){
                trouve=1;
        printf("l'animal est trouve !\n");
        printf("modifier l'age :");
        scanf("%d",&animal[i].age);

        }
        }
        if(trouve!=0){
        printf("l'animal est modifier avec succes\n");}
        else{
            printf("choix invalide");
        }
}

void modifier(){
    int choixmodifier;
    do{
 printf("*************GESTION DE MODIFICATION******************\n");
 printf("1.MODIFIER L'HABITAT D'UN ANIMAL\n");
 printf("2.MODIFIER L'AGE\n");
 printf("0.QUITTER\n");
 printf("entrer votre choix :");
 scanf("%d",&choixmodifier);
 switch(choixmodifier){
        case 1:
        system("cls");
        modifierhabitat();
        system("PAUSE");
        break;
        case 2:
        system("cls");
        modifierage();
        system("PAUSE");
        break;
        case 0:
        printf("Au revoir\n");
        break;
        default:
        printf("entrer un nombre de 0 a 2");
        break;
 }
}while(choixmodifier!=0);
}
void supprimer(){
        int id,j;
        int trouve=0;
        printf("Entrez l'ID de l'animal a supprimer : ");
        if (scanf("%d", &id) != 1) {
        printf("Erreur de saisie de l'ID.\n");
        return ;}
        for (int i = 0; i < n; i++) {
            if(animal[i].id == id){
                    trouve=1;
            for (int j = i; j < n - 1; j++) {
                animal[j].id=animal[j+1].id;
                strcpy(animal[j].nom, animal[j + 1].nom);
                strcpy(animal[j].espece, animal[j + 1].espece);
                animal[j].age=animal[j+1].age;
                strcpy(animal[j].habitat, animal[j + 1].habitat);
                animal[j].poids=animal[j].poids;
            }
             n--;
            break;
            }
            }
            if(trouve=1){
            printf("l'animal est supprime avec succes !\n");}
            else{
            printf("choix invalide");
            }
            }

void statistiques(){
    int sommeages = 0;
    int maxage = animal[0].age;
    int minage = animal[0].age;
    int indexmax = 0, indexmin = 0;
    int compteurespeces[5] = {0};
    char nomsespeces[5][20] = {"lion", "girafe", "elephant", "crocodile", "gazelle"};
        int maxcompteur = compteurespeces[0];
        int especeplusrep = 0;

    for(int i = 0; i < n; i++){

        sommeages += animal[i].age;

        if (animal[i].age > maxage) {
            maxage = animal[i].age;
            indexmax = i;
        }
        if (animal[i].age < minage) {
            minage = animal[i].age;
            indexmin = i;
        }

        for (int j = 1; j < 5; j++) {
        if (compteurespeces[j] > maxcompteur) {
            maxcompteur = compteurespeces[j];
            especeplusrep = j;
        }}
}
printf("\n***********Statistiques**************\n");
    printf("Nombre total des animaux: %d\n", n);
    printf("age moyen: %.2f\n", (float)sommeages / n);
    printf("plus vieux: %s, %d ans\n", animal[indexmax].nom, maxage);
    printf("plus jeune: %s, %d ans\n", animal[indexmin].nom, minage);
    printf("espece la plus representee: %s \n",
           nomsespeces[especeplusrep]);
}
void main(){
int choixmenu;
idcourant = n + 1;
do{
        system("cls");

    printf("***************GESTION DE ZOO*******************\n");
    printf("1.AJOUTER UN ANIMAL\n");
    printf("2.AFFICHER LES ANIMAUX\n");
    printf("3.RECHERCHER UN ANIMAL\n");
    printf("4.MODIFIER UN ANIMAL\n");
    printf("5.SUPPRIMER UN ANIMAL\n");
    printf("6.STATISTIQUE\n");
    printf("0.QUITTER\n");
    printf("Entrer votre choix : ");
    scanf("%d",&choixmenu);
      getchar();

    switch(choixmenu){
    case 1:
        system("cls");
        ajouter();
        system("PAUSE");
    break;
    case 2:
        system("cls");
        affiche();
        system("PAUSE");
    break;
    case 3:
        system("cls");
        recherche();
        system("PAUSE");
    break;
    case 4:
        system("cls");
        modifier();
        system("PAUSE");
    break;
    case 5:
        system("cls");
        supprimer();
        system("PAUSE");
    break;
    case 6:
        system("cls");
         statistiques();
        system("PAUSE");
    break;
    case 0:
     printf("Au revoir");
    break;
    default:
     break;
    }
}while(choixmenu!=0);
}
