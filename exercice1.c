#include<stdio.h>

//exercice de base pour faire une moyenne de 5 notes
//aucune gestion d erreur ni boucle d optimisation c est un exercice pour mon niveau actuel __ noob
int main (void)

{

   float notea,noteb,notec,noted,notee;
   printf("\n");
   printf("Encodeur scolaire :=============>\n");
   printf("Entrez votre note sur 20 :>");
   fscanf(stdin,"%f",&notea);
   printf("Entrez votre 2eme note sur 20 :>");
   fscanf(stdin,"%f",&noteb); 
   printf("Entrez votre 3eme note sur 20 :>");
   fscanf(stdin,"%f",&notec);
   printf("Entrez votre 4eme note sur 20 :>");
   fscanf(stdin,"%f",&noted);
   printf("Entrez votre 5eme note sur 20 :>");
   fscanf(stdin,"%f",&notee);
   printf("\n");
   printf("PATIENTEZ ON CALCUL VOTRE MOYENNE\n");

   float total = notea + noteb + notec +noted +notee;
   float moyenne = total / 5;
   printf("VOTRE MOYENNE SUR 20 EST :> %f\n",moyenne);
   printf("\n");




    return 0;
}
