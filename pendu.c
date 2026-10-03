/*OBjectif : l'ordinateur choisi un mot secret 
on propose les lettres une par une , a chaque tour le programme afiche 
la lettre du mot trouve avec des _ pour les autres
si la lettre ne s y troouve pas je perd une vie*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX  10
#define ROUGE "\x1b[31m"
#define RESET "\x1b[0m"

int compter_nb_de_char(const char *string)
{
    int i =0;
    while(string[i] != '\0')
        i++;

    return i;
}

int main (void)
{
    printf("\x1b[34m+--------------------------+\x1b[0m\n");
    printf("\x1b[34m+    VOUS AVEZ 20 ESSAIS   +\x1b[0m\n");
    printf("\x1b[34m+--------------------------+\x1b[0m\n");
    printf(ROUGE"SAUREZ VOUS TROUVER LE MOT ?\n"RESET);


    //WORDLIST DE L'ORDINATEUR
    const char *wordlist[] = {
        "ghost",
        "processeur",
        "kerberos",
        "NTLM",
        "xss",
        "shell",
        "payload",
        "moustache",
        "blablacar",
        "adcs",
        "ddos"
    };

    //BLOC DE ALEATOIRE ENTRE 1 ET 10 GRAINE = HEURE MACHINE
    int max = 11;
    int min = 1;
    srand(time(NULL));
    int nombre = rand() % (max - min);
    //printf("nombre = %d\n",nombre);//VOICI OU SE RETROUVE NB ALEATOIRE

    //LE NB DEVIENS UN MOT 
    char word[10];
    strcpy(word,wordlist[nombre]);
    //printf("Le mot a devine sera : %s\n",word);

    int nb = compter_nb_de_char(word);
    //printf("nb de fois que je devrai afficher _ = %d\n\n",nb);

    char ecranword[nb*2];
    for (int i = 0; i < nb*2;i++ )
    {
        ecranword[i] = '_';
        i++;
        ecranword[i] = ' ';
    }
    ecranword[nb*2] = '\0';//le dernier indexe du tableau est un null byte
    //on affiche a lecran
    printf(ROUGE"MISTERY-WORD:>> %s\n\n"RESET,ecranword);

    //RECUPERONS MAINTENANT DE MANIERE SECURISE LA SAISIE USER

    for (int i = 0; i != 20 ; i++)
    {
        unsigned char user_input;
        fprintf(stdout,"\x1b[32mEntrez la lettre a essayer :>>\x1b[0m");
        fscanf(stdin," %c",&user_input);//lespace est hyper important il vide tampon clavier avant de lire lettre-è

        //pour l instant on laffiche juste
        //printf("%c\n",user_input);
        int reste_ = 1;
        for (int i = 0; i < nb;i++ )
        {
            if (word[i] == user_input)
            {
                ecranword[i*2] = user_input;
                for (int i =0;i< nb*2;i++)
                {
                    printf("%c ",ecranword[i]);
                }
                printf("\n");
            }
            reste_ = 1;
            for (int verif = 0;verif < nb*2;verif++)
            {
                if(ecranword[verif] == '_')
                {
                    reste_ = 0;
                    break;
                }
                
            }
            
            if (reste_ == 1)
            {
                printf(ROUGE"YOU WON CONGRULATION !! \n\n "RESET);
                goto oooops;
                break;
            }

        }
    }
    printf("\n\x1b[31mGAME OVER ! Tu as epuise tes 20 tours...\x1b[0m\n");

    oooops:
    return 0;
}