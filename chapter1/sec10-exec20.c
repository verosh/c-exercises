#include<stdio.h>

#define TABLEN 8

int main(void){
    int c, current, num;

    num = 0;
    current = 1;

    while((c=getchar()) != EOF){
        if (c == '\t'){
            num = TABLEN - ((current - 1) % TABLEN); /* this calculates how many spaces until the next tab stop */

            while(num > 0){
                putchar(' ');
                current++;
                num--;
            }
        } else if(c == '\n'){
            putchar(c);
            current = 1;
        } else {
            putchar(c);
            current++;
        }


    }


    return 0;
}