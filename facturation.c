#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void main(){
    char titre[100][100];
    unsigned int prixU[100];
    unsigned int quantite[100];

    int i = 0;

    char continuer = 1;

    char titreDemande[100];
    unsigned int prixUdemande;
    unsigned int quantiteDemande;

    while (continuer || i == 100){
        
        printf("Quel est le titre de votre article (100 caractères max) : ");
        scanf("%s", &titreDemande);

        printf("Quel est le prix unitaire de votre article : ");
        scanf("%u", &prixUdemande);

        printf("Quel est la quantité d'article : ");
        scanf("%u", &quantiteDemande);

        *titre[i] = titreDemande;

        prixU[i] = prixUdemande;

        quantite[i] = quantiteDemande;

        i++;

        printf("Voulez vous continuer (1 = oui, 0 = non) ? ");
        scanf("%c", &continuer);

    }
    

    printf("Titre | Prix/U | Quantitée | Prix du Stock HT | Prix du Stock TTC ");

    unsigned int PrixHT;
    float PrixTTC;

    for (i = 0; i < 100; i++)
    {
        printf("%s | ", titre[i]);
        printf("%u | ", prixU[i]);
        printf("%u | ", quantite[i]);
        
        PrixHT = prixU[i]*quantite[i];
        PrixTTC = PrixHT*0.24;

        printf("%d | ", PrixHT);
        printf("%f | ", PrixTTC);

    }
    




}