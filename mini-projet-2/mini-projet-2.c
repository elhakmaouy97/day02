#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_CONTACT 50
#define TAILLE_CHAINE 50

struct contact{
char nom[TAILLE_CHAINE];
char email[TAILLE_CHAINE];
char numerodetelephone[TAILLE_CHAINE];
};
void ajouter( struct contact liste [],int compteur){

          printf("le nom du contact est :\n");
          fgets(liste[compteur].nom,TAILLE_CHAINE,stdin);

          printf("l email du contact est  :\n");
          fgets(liste[compteur].email,TAILLE_CHAINE,stdin);

          printf("le numero de telephone est :\n");
          fgets(liste[compteur].numerodetelephone,TAILLE_CHAINE,stdin);
}

   void chercher(struct contact liste[],int compteur){
              char nomrecherche[TAILLE_CHAINE];

   printf("saisir le nom de contacter a chercher :");
   fgets(nomrecherche,TAILLE_CHAINE, stdin);
     nomrecherche[strcspn(nomrecherche, "\n")] = '\0';
int trouve=0 ;
    for (int i = 0; i < compteur; i++) {

        if (strcmp(liste[i].nom, nomrecherche) == 0) {

            printf("Nom : %s\n", liste[i].nom);
            printf("Email : %s\n", liste[i].email);
            printf("Numéro de téléphone : %s\n", liste[i].numerodetelephone);
trouve=1;
            break;
        }
    }

    if (!trouve) {
        printf("aucun contact trouve \n");

   }
}
int main (){
struct contact liste [MAX_CONTACT];
int choix=0;
int compteur =0;
do {


printf("------veuillez choisir une option------\n");

printf("1:ajouter un contact.\n");
printf("2:chercher un contact .\n");
printf("3:modifier un contact .\n");
printf("4:supprimer un contact .\n");
printf("5:afficher des contacts.\n");
scanf("%d",&choix);


while(getchar() != '\n');

    switch (choix){
          case 1:
          printf("-----ajouter un contact-----");
          ajouter(liste,compteur);

            compteur++;
          break ;

        case 2:
              printf("---chercher un contact:\n---");
              chercher(liste,compteur);
              break ;
          /*case 3:
          case 4:*/
          case 5:
              if (compteur==0){
                printf("liste vide");
              }else {

              printf("----la liste des contactes est :----\n");
              for (int i=0;i<compteur;i++){
                printf("nom du contact est :%s\n",liste[i].nom);
                printf("email du contact est :%s\n",liste[i].email);
                printf("numero de telephon  du contact est :%s\n",liste[i].numerodetelephone);
              }
              }

                break ;
    }
  }  while(choix !=0);

return 0;


}


