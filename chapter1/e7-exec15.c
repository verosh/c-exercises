#include <stdio.h>

int convertCtoF(int c);
int convertFtoC(int f);


int main() {
    
    printf( "32 degrees Celsius are %d degrees Fahrenheit.\n", convertCtoF(32) );
    printf( "64 degrees Fahreneheit are %d degrees Celsius.\n", convertFtoC(64) );
    

    return 0;
}

int convertCtoF(int cels){
    
    int fahr = cels * (9.0/5.0) + 32.0;
    return fahr;
}

int convertFtoC(int fahr){
    
    int cels = (fahr - 32.0) * (5.0/9.0) ;
    return cels;
}