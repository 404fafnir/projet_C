#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){

    int nb;
    int i = 4;
    
    char isPrime;

    printf("Jusqu'à quel nombre voulez afficher les nombres premiers ? ");
    scanf("%d", &nb);

    while (i < nb)
    {
        isPrime = 0;
        int limiteRecherche = sqrt(i)+1;
        int j = 3;

        switch (i%2 == 0)
        {
        case 0:
            while ((j < limiteRecherche && !isPrime))
            {
                if (i%j == 0)
                {
                    isPrime = 1;    
                }
                j++;

            }

            switch (isPrime)
            {
            case 0:
                printf("%d, ", i);
                break;

            default:
                
                break;
            }

            break;

        default:
            
            break;
        }

        i++;



    }
       

}



