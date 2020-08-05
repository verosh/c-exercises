#include <stdio.h>
#include <limits.h>


int main(void){
    printf("Max int size:\t %10d\t\t, %ld bytes\n",INT_MAX, sizeof(int));
    printf("Min int size:\t %10d\n",INT_MIN);
    printf("Max short size:\t %10d\t\t, %ld bytes\n",SHRT_MAX, sizeof(short int));
    printf("Min short size:\t %10d\n",SHRT_MIN);
    printf("Max long size:\t %10ld\t, %ld bytes\n",LONG_MAX, sizeof(long int));
    printf("Min long size:\t %10ld\n",LONG_MIN);
    printf("Max char size:\t %10d\t\t, %ld bytes\n",CHAR_MAX, sizeof(char));
    printf("Min char size:\t %10d\n",CHAR_MIN);

    return 0;
}