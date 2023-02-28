#include <stdio.h>
#include <stdlib.h>



void main(){


    int base, max;

    printf("what will the base number be ? ");
    scanf("%d", &base);
    printf("\n");
    printf("what will the max number be ? ");
    scanf("%d", &max);

    int fiboN;
    int tmp1 = 0;
    int tmp2 = base;

    char valid = 1;

    while (valid)
    {
        fiboN = tmp1 + tmp2;
        tmp1 = tmp2;
        tmp2 = fiboN;

        if (fiboN < max)
        {
            printf("%d, ", fiboN);
        }
        else
        {
            valid = 0;
        }
        
    }
    

}



