#include <stdio.h>

int main()
{
    
    int c, nl;
    nl = 0;

    while( (c = getchar() ) != EOF ){
        if (c=='\n')
            nl++;
    }

    printf("\n%d lines in total typed.\n",nl);


    return 0;
}