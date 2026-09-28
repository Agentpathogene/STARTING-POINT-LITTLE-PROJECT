#include<stdio.h>

/* Petit programme du 25/09/26 quand je m'emmerde dans le train sans connexion pour bosser
des nouveau truc alors j en profite pour revoir ma lecon d'hier : les conditions en C 
Un petit pas de plus vers un niveau avance/red team en devloppement d'exploit */

int main (void)
{

    //GERER L AGENDA NUMERIQUE DES MOIS
    int nb_entree_par_user;
    printf("Convertir nombre en mois de l'annee :>");
    fscanf(stdin,"%d",&nb_entree_par_user);

    //work with switch and case conditions
    switch(nb_entree_par_user)
    {
        case 1:
        printf("Janvier\n");
        break;
        case 2:
        printf("Fevrier\n");
        break;
        case 3:
        printf("Mars\n");
        break;
        case 4:
        printf("Avril\n");
        break;
        case 5:
        printf("Mai\n");
        break;
        case 6:
        printf("Juin\n");
        break;
        case 7:
        printf("Juillet\n");
        break;
        case 8:
        printf("Aout\n");
        break;
        case 9:
        printf("Septembre\n");
        break;
        case 10:
        printf("Octobre\n");
        break;
        case 11:
        printf("Novembre\n");
        break;
        case 12:
        printf("Decembre\n");
        break;
        default:
        printf("ERROR EVALUATING MONTH VALUE\n");
        break;


    }

    //work with the shortest type of condition
    short variable;
    variable = nb_entree_par_user == 2 ? 5 : 10;
    printf("Valeur de variable ( mon 3 eme test ) : %hd\n",variable);



    // work with an other type of conditions
    long test2;
    printf("Enter value for test2 :>");
    scanf("%ld",&test2);    
    if (test2 == 2)
       test2++;
    else
       test2 += 6;
    printf("Valeur de test 2 apres incrementation : %ld\n",test2);




    //the last type of conditions
    float test3;
    printf("Enter value for test3 :>");
    fscanf(stdin,"%f",&test3);
    if ((test3 > 0 && test3 < 10) && (test3 > 1))
    {
        printf("test3 est situe entre 2 et 9 compris");
    }
    if (!(test3 == 0) || !(test3 > 1+5) )
    {
        printf("test3 est pas egal a 0 et n'est pas superieur a 6\n");
    }



    // else sera rattache a ce if
    if (test3 == 0 + test2)
    {
        printf("the end (3condition) has been executed here is your flag : HTB{31up1d_cha1l3ng3_wh3n_1_am_1n_the_1ra1n} \n");
    }
    else
    {
        printf("LOL THE LAST CONDITION NOT EXECUTED\n");
    }

    
    return 0;
}