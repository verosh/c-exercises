#include <stdio.h>

#define IN 1
#define OUT 0

int main() {

    int c,nl,nw,nc,state;

    state = OUT;

    nl = nw = nc = 0;

    while ((c = getchar()) != EOF){
        nc++;
        if(c=='\n'){
            nl++;
        }
        if(c==' ' || c=='\n' || c== '\t'){
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            nw++;
        }

    }
    printf("\nLines: %d; Words: %d; Characters: %d\n",nl,nw,nc);

    return 0;
}


/*Exercise 1-11: 

I would test an empty file, a file with no whitespace or newlines and a file with only whitespace.*/