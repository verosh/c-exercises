#include<stdio.h>

#define TABLEN 8

int main(void){
    int c, current, countb, countt;

    countb = countt = 0;
    
    
    for(current = 1; (c=getchar()) != EOF; current++ ){
        
        if(c == ' '){
            if( (current % TABLEN) != 0){
                countb++;
            } else {
                countb = 0;
                countt++;
            }
        } else {
            while(countt > 0){
                putchar('\t');
                countt--;
            }
            if(c == '\t'){
                countb = 0;
            } else {
                while(countb > 0){
                    putchar(' ');
                    countb--;
                }
            }

            putchar(c);

            if(c == '\n'){
                current = 0;
            } else if(c == '\t'){
                current = current + ( TABLEN - (current - 1) % TABLEN) -1;
            }
        }

        
    }
    
    return 0;
}