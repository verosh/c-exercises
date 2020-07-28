#include <stdio.h>

int main() {
    int c;
    c = getchar();

    /* press Ctrl + D to exit the loop */


    while (c != EOF){
        printf("\nIs c EOF: %d ",c == EOF);
        putchar(c);
        c = getchar();
    }
    printf("\nIs c EOF: %d ",c == EOF);
    
    printf("\nThe value of EOF is: %d\n",EOF);

    return 0;
}