#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    int inp;

    printf("Quel est le chiffre que vous avez choisi ? ");
    scanf("%d", &inp);

    switch (inp%2 == 0)
    {
    case 0:
        switch (inp%3 == 0)
        {
        case 1:
            printf("le nombre est impaire et divisible par 3");
            break;
        
        default:
            printf("le nombre est impaire et pas divisible par 3");
            break;
        }
        break;
    
    default:
        switch (inp%3 == 0)
        {
        case 1:
            printf("le nombre est pair et divisible par 3");
            break;
        
        default:
            printf("le nombre est paire et pas divisible par 3");
            break;
        }
        break;
    }
    
    

    
}

