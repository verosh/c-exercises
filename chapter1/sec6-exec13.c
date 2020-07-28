#include <stdio.h>

#define MAXWLEN 20
#define MAXWORDS 30

int main() {

    int word[MAXWORDS];
    int c,nw,nc;

    nw = nc = 0;

    for (int i = 0; i< MAXWORDS;i++){
        word[i] = 0;
    }

    while ((c = getchar()) != EOF){
        nc++;
        if(c ==' ' || c=='\n' || c== '\t'){
            word[nw]= nc-1;
            nw++;
            nc=0;
        } 

    }

    for(int i = MAXWLEN; i>=1; i--){
        for(int j = 0; j <= nw; j++){

            if(i <= word[j]){
                putchar('+');
                putchar(' ');
                
            } else {
                putchar(' ');
                putchar(' ');
                
            }

        }
        putchar('\n');
    }
    
    
    return 0;
}
