#include <stdio.h>

int main() {
    float fahr, cels;
    int low, up, step; 

    low = 0;
    up = 40;
    step = 2;

    cels = low;

    printf( "%3s\t%6s\n\n","C","F" );

    while( cels <= up ) {
        fahr = cels * (9.0/5.0) + 32.0;
        printf("%3.0f\t%6.1f\n",cels,fahr);
        cels += step;
    }


    return 0;
}