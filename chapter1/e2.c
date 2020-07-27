#include <stdio.h>

main() {
    int fahr, cels;
    int low, up, step; /* this is a comment */

    low = 0;
    up = 300;
    step = 20;

    fahr = low;

    while( fahr <= up ) {
        cels = 5* (fahr - 32) / 9;
        printf("%d\t%d\n",fahr,cels);
        fahr += step;
    }
}