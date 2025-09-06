#include <stdio.h>
#include <stdlib.h>
#include<string.h>



/*int main(){                      //Challenge 1 : Affichage d'une Chaîne

    char c[100];
        printf("veuillez saisir une chaine de caractere:\n");
        fgets(c,sizeof(c),stdin);
        printf("le texte que vous avez saisir est : %s",c);
        return 0;
        }*/
/*int main(){                    //Challenge 3 : Concaténation de Chaînes
    char c1[100];
    char c2[100];
        printf("veuillez entre une chaine de caracter:");
        fgets(c1,sizeof(c1),stdin);

        printf("veuillez entre une chaine de caracter:");
        fgets(c2,sizeof(c2),stdin);
        strcat(c1,c2);
        printf("la chaine resultant est :%s",c1);

return 0;
}*/


/*int main(){                     //Challenge 5 : Inversion de Chaîne
    char c1[100];
        printf("saisir une chaine de caracter:");
        fgets(c1,sizeof c1,stdin);
    for (int i=strlen(c1)-1;i>=0;i--){
            printf("%c",c1[i]);

        }

return 0;
}
*/
/*int main(){           //Challenge 6 : Compte des Occurrences d'un Caractère


    char c[1000];
    char a;
    int compteur=0;
        printf("veuillez saisir une chaine de caractere:");
        fgets(c,sizeof c,stdin);
        printf("saisir un caratere preciser: ");
        scanf("%c",&a);
    for (int i=0;c[i]!='\0';i++){
            if (c[i]==a)
        compteur ++;
        }
        printf("le caracter ce repeter :%d fois",compteur );
return 0;

}*/

/*int main (){              //Challenge 8 : Conversion en Minuscules

    char c1[200];
    int i;

        printf("saisir une chaine de caracter majuscule:");
        fgets(c1,sizeof c1,stdin);
    for(i=0;c1[i]!='\0';i++){
            if (c1[i]>='A'&&c1[i]<='Z'){
               c1[i]=c1[i]+32;

            }

        }
        printf("la chaine en minuscules est %s",c1);


return 0;
}*/





/*int main (){              //Challenge 7 : Conversion en Majuscules

    char c1[200];
    int i;

        printf("saisir une chaine de caracter minuscules:");
        fgets(c1,sizeof c1,stdin);
    for(i=0;c1[i]!='\0';i++){
            if (c1[i]>='a'&&c1[i]<='z'){
               c1[i]=c1[i]-32;

            }

        }
        printf("la chaine en majuscule est %s",c1);


return 0;
}*/

/*int main(){              //Challenge 9 : Suppression des Espaces

    char c1[200];
    int i;
    int j=0;
    int compteur=0 ;
        printf("saisir une chaine de caractere:");
        fgets(c1,sizeof c1,stdin);
    for (i=0;c1[i]!='\0';i++){
        if (c1[i]!=' '){
            c1[j]=c1[i];
        j++;
        }

}
            c1[j]='\0';
            printf("apres la suppression d espace voila la chaine :%s",c1);
return 0;
}

