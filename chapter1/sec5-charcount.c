#include <stdio.h>

int main()
{
    
    double numC;

    for(numC = 0; getchar() != EOF; numC++)
        ;

    printf("\n%.0f characters in total typed.\n",numC);


    return 0;
}