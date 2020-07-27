#include <stdio.h>

int main()
{
    
    long numC = 0;

    while(getchar()!=EOF){
        numC++;
    }

    printf("\n%ld characters in total typed.\n",numC);


    return 0;
}