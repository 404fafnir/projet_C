#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    int nb;

    printf("Quel nombre voulez vous vérifier ? ");
    scanf("%d", &nb);


    int limiteRecherche = floor(sqrt(nb));

    int i = 3;

    char isPrime = 0;

    switch (nb%2 == 0)
    {
    case 0:
        while ((i < limiteRecherche || !isPrime) && i < nb)
        {
            if (nb%i == 0)
            {
                isPrime = 1;    
            }
            i++;
            
        }

        switch (isPrime)
        {
        case 0:
            printf("%d est premier", nb);
            break;
        
        default:
            printf("%d n'est pas premier car divisible par %d", nb, i);
            break;
        }
        
        
        break;
    
    default:
        printf("%d n'est pas premier", nb);
        break;
    }
    
}

