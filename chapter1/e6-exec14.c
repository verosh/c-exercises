#include <stdio.h>

#define ASCII 128
#define MAXCOUNT 30

int main() {

    int count[ASCII];
    int c,nw,nc;

    nw = nc = 0;

    for (int i = 0; i< ASCII;i++){
        count[i] = 0;
    }

    while ((c = getchar()) != EOF){
        count[c]++;
    }

    for(int i = MAXCOUNT; i>=1; i--){
        for(int j = 0; j <= ASCII; j++){

            if(i <= count[j]){
                putchar('+');
                
            } else {
                putchar(' ');
                
            }
        }
        putchar('\n');
    }

    
    return 0;
}
