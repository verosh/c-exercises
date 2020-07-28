#include <stdio.h>

int main() {
    float fahr, cels;
    int low, up, step; /* this is a comment */

    low = 0;
    up = 300;
    step = 20;

    fahr = low;

    printf( "%3s\t%6s\n\n","F","C" );

    while( fahr <= up ) {
        cels = (5.0/9.0) * (fahr - 32.0) ;
        printf("%3.0f\t%6.2f\n",fahr,cels);
        fahr += step;
    }


    return 0;
}