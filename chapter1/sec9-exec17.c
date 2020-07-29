#include <stdio.h>
#define MAXLINE 1000

int getLineLength(char line[], int maxline);


int main(void) {
    int len;
    char line[MAXLINE];
    
    while ((len = getLineLength( line, MAXLINE )) > 0){
        if (len >= 80){
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
