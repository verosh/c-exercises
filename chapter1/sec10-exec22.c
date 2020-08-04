#include <stdio.h>
#define MAXLINE 1000
#define FOLD 80


int getLineLength(void);

char line[MAXLINE];

int main(void) {
    int len,i,pos,temp;
    
    
    while ((len = getLineLength()) > 0){
        if (len >= FOLD){
            pos = 0;
            for ( i = 0; i < len; i++ ){
                if ( line[i] == ' ' || line[i] == '\t' ){
                    temp = i;
                }

                if ( pos == FOLD ){
                    line[temp] = '\n'; /* replacing the last whitespace before FOLD with a new line char */
                    pos = 0;
                }
                pos++;
            }

        }
        printf("%s",line);
    }
    return 0;
}

int getLineLength(void){
    int c,i;
    extern char line[];

    for(i = 0; i < MAXLINE - 1 && (c=getchar()) != EOF && c!= '\n'; i++ ){
        line[i]=c;
    }

    if (c == '\n'){
        line[i] = c;
        i++;
    }
    line[i]='\0';
    return i;
}

