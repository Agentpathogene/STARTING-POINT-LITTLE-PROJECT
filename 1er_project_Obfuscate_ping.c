#include<stdio.h>
#include <stdlib.h>

/*PETIT DEBUT AVEC MON PREMIER PROJET EN MALDEV EXECUTER UNE COMMANDE SYSTEM
SANS L ECRIRE EN TEXTE CLAIR (FIN PRESQUE LOL) DANS L EXECUTABLE ICI C EST UN SIMPLE PING MAIS
VOUS POUVEZ LE REMPLACER PAR CE QUE VOUS VOULEZ ... */


int main (void)

{
  //un tableau de caractere avec 1 sur 2 util lol
  char str[] = {'a', 'p', 's', 'i', 's', 'n', 'q', 'g', 'd', ' ', 'd', '-', 'd', 'c', 'd', ' ', 'd', '4', 'd', ' ', 'd', '1', 'd', '2', 'd', '7', 'd', '.', 'd', '0', 'd', '.', 'd', '0', 'd', '.', 'd', '1'};
  char pan[50];
  int ligne = 0;
  for (int i = 1; i<35;i+=2)
  {
    pan[ligne] = str[i];//on stoke dans pan 1 caractere sur 2 de str[]
    ligne += 1;
    
  }
  pan[ligne] = '\0';//on ecris le null byte le signal de fermeture du tableau

 
  int lol = system(pan);//on execute le contenu de pan






    return 0;
}
