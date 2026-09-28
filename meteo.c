#include<stdio.h>
#define X
#ifdef X

/*PETIT PROGRAMME DE DEBUTANT REALISER SANS CONNEXION DONC OUI LE CODE ET TRES REDONDANT 
ET JE SUIS RESTE SUR MES AQCUIS POUR CE PROJET MAIS C EST COMEME INTERESSANT POUR MOI
POUR SUIVRE MON EVOLUTION EN PASSANT UN GRAND MERCI A CODINGOVERFLOW CE GAS EST GENIAL*/
    
int taux_humidite_vs_moyenne (int a)
{
    int c;
    if (a < 30)
    {
        c = 1;
        
    }
    if ((a > 30 && a < 60 ) || (a >= 30 && a <= 60))
    {
        c = 2;
    }
    if (a > 61 && a < 100 )
    {
        c = 3;
    }
    if (a > 100)
    {
        printf("ERROR IN  'taux_humidite' EVALUATION PLEASE TYPE CORRECT VALUE :>\n");
        
    }
    return c;
}


int pression_athmospherique_vs_moyenne (int b)
{
    int x;
    if (b < 400 && b > 200)
    {
       x = 1;
    }
    if ((b > 400 && b < 200) && (b < 600))
    {
        x = 2;
    }
    if (b > 600 && b < 1000 )
    {
        x = 3;
    }
    if (b > 1000 || !(b != 1000))
    {
        printf("ERROR IN 'pression_atmospherique' EVALUATION PLEASE TYPE CORRECT VALUE :>\n");
    }
    return x;
}


int vitesse_du_vent_vs_moyenne (int c)
{
    int x;
    if ( c < 30 && c > 10 )
    {
        x = 1;
    }
    if (c < 10)
    {
        x = 0;
    }
    if ( c > 30 && c < 75)
    {
        x = 2;
    }
    if (c > 75 && c < 100)
    {
        x = 3;
    }
    if (c > 100 || c < 0)
    {
        printf("ERROR IN 'vitesse_du_vent' EVALUATION PLEASE ENTER CORRECT VALUE:>");
    }
    return x;
}

int evaluation_de_la_meteo (int a,int b, int c )
{

    int total = a + b + c;
    if(total > 0 && total <= 3 )
    {
        printf("LE TOTAL DES INDICES VAUT %d SUR 9 CE QUI VEUX DIRE QUE lES CONDITIONS METEO SONT TROP DANGEREUSES\n",total);
    }
    if (total > 3 && total <= 6)
    {
        printf("LE TOTAL DES INDICES VAUt %d SUR 9 CE QUI VEUX DIRE QUE LES CONDITIONS METEO SONT A SURVEILLER MAIS ACCEPTABLES\n",total);
    }
    if (total > 6 && total <= 9)
    {
        printf("LE TOTAL DES INDICES VAUT %d SUR 9 CE QUI VEUX DIRE QUE LES CONDITIONS METEO SONT EXELLENTES\n",total);
    }

    return 0;
}

int main (void)
{

    int vitesse_du_vent;
    int pression_athmospherique;
    int humidite;
    printf("Entrez les donnee meteorologique chiffre seulement:>\n");

    //vitesse du vent 
    int x;
    printf("Entrez la vitesse du vent :>");
    scanf("%d",&vitesse_du_vent);
    printf("SET vitess_du vent = %d km/h\n",vitesse_du_vent);
    x = vitesse_du_vent_vs_moyenne(vitesse_du_vent);
   

    //presssion athmospherique
    int y;
    printf("Entrez la pression athmospherique:>");
    scanf("%d",&pression_athmospherique);
    printf("SET pression_athmospherique = %d \n");
    y = pression_athmospherique_vs_moyenne(pression_athmospherique);
   
    //humidite de l'air
    int z;
    printf("Entrez le taux d'humidité de l'air :>");
    scanf("%d",&humidite);
    printf("SET humidite_de_l_air = %d pourcent\n");
    z = taux_humidite_vs_moyenne(humidite);
  
    //Determinations de la meteo depuis els donnes recoltees
    evaluation_de_la_meteo(x,y,z);

    return 0;
}

#endif 
