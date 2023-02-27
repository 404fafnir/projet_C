#include <stdio.h>
#include <stdlib.h>




/*
unsigned int fibo(){
    
    unsigned int base, max;

    printf("what will the base number be ? ");
    scanf("%u \n", &base);

    printf("what will the max number be ? ");
    scanf("%u \n", &max);


    unsigned int fiboN = base;
    unsigned int tmp1, tmp2 = base;
    


    while (fiboN < max)
    {
        tmp1 = fiboN;

        fiboN = tmp1 + tmp2;

        tmp2 = fiboN;

        printf("%u, ", fiboN);
    }
    
}*/

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



