#include <stdio.h>
#include <limits.h>


int main(void){
    printf("Max int size: %d, %ld bytes\n",INT_MAX, sizeof(int));
    printf("Min int size: %d\n",INT_MIN);
    printf("Max short size: %d %ld bytes\n",SHRT_MAX, sizeof(short int));
    printf("Min short size: %d\n",SHRT_MIN);
    printf("Max long size: %ld\n",LONG_MAX);
    printf("Min long size: %ld\n",LONG_MIN);
    printf("Max char size: %d\n",CHAR_MAX);
    printf("Min char size: %d\n",CHAR_MIN);
    printf("%ld",sizeof(short int));


    return 0;
}