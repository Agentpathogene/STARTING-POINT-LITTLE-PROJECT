/*COMMENCONS PAR DEFINIR L'OBJECTIF DE CE CODE
ON VA CREE UNE BASE DE DONNE DE CLIENT ET PRODUIT ASSOCIE
OBJECTIF UN MENU CHOIX ENTRE ENTREE UN NOUVEau CLIENT AFFICHER UN ClIENT PAR
SON ID DEFINI INCREMENTALEMENT ET BREAK*/
#include<stdio.h>
#define x
#ifdef x

enum Constante 
{

    rouge = 1,
    blanc = 2,
    rose = 3

};

typedef struct 
{
    int ID;
    float total;
    enum Constante type_d_achat;

}Client;
int main (void)
{

    //CREATION DES CASIERS A CLIENTS
    Client client1;
    client1.ID = 0; 
    Client client2;
    client2.ID = 0;
    
    //prix des produits 
    float vin_rouge = 12.55;
    float rose = 13.4;
    float vin_blanc = 14.22;

    int choix_du_menu = 0;
    int i;
    for (i = 0;i != 4;i = choix_du_menu)
    {
        printf("\n");
        printf("Portail de stockage de la base de donnée :\n\n");
        printf(" 1)__Entrez un nouveau client il y en a que 2 possible en tout\n");
        printf(" 2)__Modifier un client existent\n");
        printf(" 3)__Afficher un client existent\n");
        printf(" 4)__Sortir du portail\n\n");
        printf("Entrez le numéro associe au choix :>>");
        scanf("%d",&choix_du_menu); 
        printf("\n"); 
        do
        {
            if (choix_du_menu == 1)
            {
               
                if (client1.ID == 0)
                {
                    client1.ID += 1;
                    printf("Entrez le type d achat du client:\n");
                    printf("Type numero 1 sera evalue a vin rouge\n");
                    printf("Type numero 2 sera evalue a vin blanc\n");
                    printf("Type numero 3 sera evalue a rose\n");
                    printf(":>>");
                    scanf("%d",&client1.type_d_achat);
                    printf("\n");
                    if(client1.type_d_achat == 1)
                    {
                        client1.total = vin_rouge;
                        
                    }
                    else if (client1.type_d_achat == 2)
                    {
                        client1.total = vin_blanc;
                        
                    }
                    else if (client1.type_d_achat == 3)
                    {
                        client1.total = rose;
                        
                    }
                    else
                    {
                        break;
                    }
                    printf("------\n");
                    printf("VOICI LE CLIENT EN CODEE:\n");
                    printf("------\n\n");
                    printf("L'Id du client est : %d\n",client1.ID);
                    printf("Il a effectue un achat de type : %d\n",client1.type_d_achat);
                    printf("Le montant de cet achat s'eleve a : %f\n euros",client1.total);
                    printf("----------------------------------\n");
                    printf("\n");
                }
                else if (client1.ID == 1 && client2.ID == 0)
                {
                    //CODE DE REMPLISSAGE POUR CLIENT2
                    client2.ID += 2;
                    printf("Entrez le type d achat du client:\n");
                    printf("Type numero 1 sera evalue a vin rouge\n");
                    printf("Type numero 2 sera evalue a vin blanc\n");
                    printf("Type numero 3 sera evalue a rose\n");
                    printf(":>>");
                    scanf("%d",&client2.type_d_achat);
                    printf("\n");
                    if(client2.type_d_achat == 1)
                    {
                        client2.total = vin_rouge;
                        
                    }
                    else if (client2.type_d_achat == 2)
                    {
                        client2.total = vin_blanc;
                        
                    }
                    else if (client2.type_d_achat == 3)
                    {
                        client2.total = rose;
                        
                    }
                    else
                    {
                        break;
                    }
                    printf("------\n");
                    printf("VOICI LE CLIENT EN CODEE:\n");
                    printf("------\n\n");
                    printf("L'Id du client est : %d\n",client2.ID);
                    printf("Il a effectue un achat de type : %d\n",client2.type_d_achat);
                    printf("Le montant de cet achat s'eleve a : %f\n euros",client2.total);
                    printf("----------------------------------\n");
                    printf("\n");

                }
                //BOUCLE IDEM MAIS POUR CLIEN2
                break;
                //COde d encodage du client

            }
            if ( choix_du_menu == 2)
            {
                printf("ENTREZ L'ID DU CLIENT A MODIFIER:>>");
                int id_de_personne = 0;
                scanf("%d",&id_de_personne);
                if(id_de_personne == 1)
                {
                    printf("MODIFIER LE CLIENT %d :\n",id_de_personne);
                    printf("Entrez le nouveau type d'achat du client : ");
                    scanf("%d",&client1.type_d_achat);
                    printf("Le client 1 a mtn un achat de type %d\n",id_de_personne);
                }
                else if (id_de_personne == 2)
                {
                    printf("MODIFIER LE CLIENT %d :\n",id_de_personne);
                    printf("Entrez le nouveau type d'achat du client : ");
                    scanf("%d",&client2.type_d_achat);
                    printf("Le client 2 a mtn un achat de type %d\n",id_de_personne);
                }
            break;
            }

            
            if (choix_du_menu == 3)
            {
                printf("Entrez l id du client a affichier :");
                int iddi;
                scanf("%d",&iddi);
                if (iddi == 1)
                {
                    printf("\n---------------------------------\n");
                    printf("ID du client %d\n",client1.ID);
                    printf("Total de sa commande %f\n",client1.total);
                    printf("-----------------------------------\n");

                }
                if (iddi == 2)
                {
                    printf("\n----------------------------------\n");
                    printf("ID du client %d\n",client2.ID);
                    printf("Total de sa commande %f\n",client2.total);
                    printf("-------------------------------------\n");

                }
                else
                {
                    break;
                }
                break;
                //code dentree de l id du client pour affichage
                //case ou il existe pas  et ou il existe
                
            }
            else 
            {
                printf("Exiting with code 4\n\n");
                break;
            }
        }while(choix_du_menu != 4);
    }
    return 0;
}
#else 
#endif

























































