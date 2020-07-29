#include <stdio.h>
#define MAXLINE 1000

int getLineLength(char line[], int maxline);
int removeTrails(char s[]);

int main(void) {
    int len;
    char line[MAXLINE];
    
    while ((len = getLineLength( line, MAXLINE )) > 0){
        if (removeTrails(line) > 0){
            printf("%s",line);
        }
    }
    
}

int getLineLength(char s[], int lim){
    int c,i;

    for(i = 0; i < lim - 1 && (c=getchar()) != EOF && c!= '\n'; i++ ){
        s[i]=c;
    }

    if (c == '\n'){
        s[i] = c;
        i++;
    }
    s[i]='\0';
    return i;
}

int removeTrails(char s[]){
    int i;

    for(i = 0; s[i]!='\n'; i++) {} /* finding the end of the line */

    i--;

    for(i > 0; ((s[i] == ' ') || (s[i] == '\t')); i--) {} /* finding the last non-whitespace character in the line */

    if(i >= 0){ /* designating the new end of line */
        i++;
        s[i] = '\n';
        i++;
        s[i] = '\0';
    }
    return i; 
    
}