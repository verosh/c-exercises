#include <stdio.h>

#define LOW 0
#define UP 300
#define STEP 20

int main() {
    
    printf( "%3s\t%6s\n\n","F","C" );

    for ( int fahr = UP; fahr>= LOW; fahr -= STEP){
        printf( "%3d\t%6.2f\n", fahr, ( (5.0/9.0) * (fahr - 32.0) ) );
    }

    return 0;
}