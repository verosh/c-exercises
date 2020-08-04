#include <stdio.h>
#define MAXLINE 10000
#define IN 1
#define OUT 0


int getLineLength(void);

char line[MAXLINE];
char copied[MAXLINE];

int main(void) {
    int len,i,j,state;
    
    state = OUT;
    j = 0;
    while ((len = getLineLength()) > 0){
        for( i = 0; i < len-1; i++){
            if( line[i] == '/' && line[i+1] == '*' ){
                state = IN;
                        } else if ( line[i] == '*' && line[i+1] == '/' ) {
                i++;
                state = OUT;
                
            } else if (state == OUT) {
                copied[j] = line[i];
                j++;
            }
        }


        printf("\n\n%s",copied);
    }
    return 0;
}

int getLineLength(void){
    int c,i;
    extern char line[];

    for(i = 0; i < MAXLINE - 1 && (c=getchar()) != EOF; i++ ){
        line[i]=c;
    }

    if (c == EOF){
        line[i] = '\0';
    }
    
    return i;
}

