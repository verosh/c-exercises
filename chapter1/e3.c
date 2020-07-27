#include <stdio.h>

int main() {
    
    printf( "%3s\t%6s\n\n","F","C" );

    for ( int fahr = 300; fahr>= 0; fahr -= 20){
        printf( "%3d\t%6.2f\n", fahr, ( (5.0/9.0) * (fahr - 32.0) ) );
    }

    return 0;
}