#include <stdio.h>

int main(void){
    int lim,c,i;
    for(i = 0; i < lim - 1; i++){
        c = getchar();
        if( c != '\n'){
            if( c!= EOF){
                /* do sth */
            }
        }
    }

    return 0;
}