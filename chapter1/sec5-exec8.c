#include <stdio.h>

int main()
{
    
    int c, newlines,tabs,spaces;
    newlines = 0;
    tabs = 0;
    spaces = 0;

    while( (c = getchar() ) != EOF ){
        if (c=='\n')
            newlines++;
        else if (c=='\t')
            tabs++;
        else if (c==' ')
            spaces++;
    }

    printf("\n%d lines in total typed.\n",newlines);
    printf("\n%d tabs in total typed.\n",tabs);
    printf("\n%d blanks in total typed.\n",spaces);
    

    return 0;
}