#include <stdio.h>
#define MAXLINE 1000

int getLineLength(char line[], int maxline);
void reverse(char s[], char out[]);
void reverseSwap(char s[]);

int main(void) {
    int len;
    char line[MAXLINE];
    char reversedLine[MAXLINE];
    
    while ((len = getLineLength( line, MAXLINE )) > 0){
        reverse(line, reversedLine);
        printf("\nCopy reversed: %s\n",reversedLine);

        for(int i = 0; line[i]!='\0'; i++ )
            reversedLine[i] = line[i];
        reverseSwap(reversedLine);
        printf("\nSwap reversed: %s\n", reversedLine );
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

void reverse(char s[], char out[]){
    int i;
    int j = 0;

    for(i = 0; s[i]!='\0'; i++) {} /* finding the end of the line */

    i--;
 
    while(i >= 0){
        out[j] = s[i];
        j++;
        i--;
    }

    out[j]='\0';
    
}


 void reverseSwap(char s[]){
    int i, j;

    for(i = 0; s[i]!='\0'; i++) {} /* finding the end of the line */

    i--;

    for (j = 0; j < i; j++){
        char temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        i--;
    }

}