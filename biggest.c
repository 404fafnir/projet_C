#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int res;

    int a,b,c;
    
    printf("Choisissez le premier nombre : ");
    scanf("%d", &a);
    printf("\n");
    printf("Choisissez le deuxième nombre : ");
    scanf("%d", &b);
    printf("\n");
    printf("Choisissez le troisième nombre : ");
    scanf("%d", &c);
    printf("\n");

    switch (a > b)
    {
    case 1:
        switch (a > c)
        {
        case 1:
            res = a;
            break;
        
        default:
            res = c;
        }
        break;
    
    default:
        switch (b < c)
        {
        case 1:
            res = c;
            break;
        
        default:
            res = b;
            break;
        }
        break;
    }

    printf("le plus grand nombre est %d", res);
}

