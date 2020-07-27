#include <stdio.h>

int main()
{
    
    int c, state;
    state = 0;

    while( (c = getchar() ) != EOF ){
        if (c==' '){
            if (state==0){
                putchar(c);
                state = 1;
            }
        } else {
            state = 0;
            putchar(c);
        }
    }

    return 0;
}