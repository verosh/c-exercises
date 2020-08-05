#include <stdio.h>
#include <string.h>

int atoi(char s[]){
    int i,n;

    n = 0;

    for ( i = 0; s[i] >= '0' && s[i] <= '9'; i++){
        n = 10 * n + (s[i] - '0');
    }

    return n;
}

int  power ( int x, int y){
    int i,n;

    if( y == 0 )
        return 1;

    n = 1;

    for( i = 1; i <= y; i++ ){
        n = n * x;
    } 

    return n;
}


int htoi(char s[]){
    int i,n,stop,exp;
    const int len = strlen(s);
    n = 0;

    if( len > 2 && (s[1] == 'x' || s[1] == 'X') ){
        stop = 2;
    } else {
        stop = 0;
    }
    exp = 0;
    for( i = len -1; i >= stop; i--){
        if( s[i] == 'A' || s[i] == 'a' ){
            n += 10 *  power( 16, exp );
        } else if( s[i] == 'B' || s[i] == 'b' ){
            n += 11 *  power(  16,  exp );
        } else if( s[i] == 'C' || s[i] == 'c' ){
            n += 12 *  power(  16,   exp );
        } else if( s[i] == 'D' || s[i] == 'd' ){
            n += 13 *  power(  16,   exp );
        } else if( s[i] == 'E' || s[i] == 'e' ){
            n += 14 *  power(  16,   exp );
        } else if( s[i] == 'F' || s[i] == 'f' ){
            n += 15 *  power(  16,   exp );
        } else if( s[i] >= '0' && s[i] <= '9' ){
            n += atoi( &s[i] ) *  power(  16,   exp );
        } 
        exp++;
    }

    return n;
}


int main(void){
    
    char s[4] = "0x1E";

    printf("hex: %s, decimal: %d\n", s, htoi(s));

    return 0;
}