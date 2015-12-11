/* Program to count newline, tabs and white spaces */
#include "header.h"

int main()
{
    FILE *fp = fopen("test.txt","r");

    int p;
    int space = 0;
    int newline = 0;
    int tab = 0;

    while((p = fgetc(fp))!= EOF)
    {
        if (p == '\n')
            newline++;
        else if (p == '\t')
            tab++;
        else if (p == ' ')
            space++;
        else
            continue;
    }    
    printf("spaces=%d \t newline=%d \t tab=%d\n",space,newline,tab);

    return 0;
}
