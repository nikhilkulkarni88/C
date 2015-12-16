/* Program to print histogram horizontally and vertically */
#include "header.h"

/*****************************************
FUNCTION   : To print a histogram Horizontally
INPUT ARGS : Pointer to char
OUTPUT ARGS: [None]
******************************************/
void horizontalPrint(char len[])
{
    int i = 0, j = 0;
    for(i = 0; len[i] != -1; i++)
    {
        for(j = 0; j < len[i]; j++)
        {
            printf("-");
        }
        printf("\n");
    }
    return;
}

/*****************************************
FUNCTION   : To print a histogram Vertically
INPUT ARGS : Pointer to char
OUTPUT ARGS: [None]
******************************************/
void verticalPrint(char len[])
{
    int i,j;
    for(i = MAXWORDLEN;i > 0 ; i--)
    {
        for(j = 0; len[j] != -1; j++)
        {
            if(len[j] < i)
            {
                printf(" ");
            }
            else
            {
                printf("|");
            }
        }
        printf("\n");
    }
    return;
}
int main()
{
    char a[]             = " This si to check lenght";
    char len[MAXWORDS] = {0}; /* This will store the length of each word in order */
    char *ptr            = a;
    int count            = 0; /*To count the length of the word */
    int i                = 0; /* To index into the len array */
    
    while( *ptr != '\0')
    {
        if((*ptr == ' ') || (*ptr == '\n') || (*ptr == '\t'))
        {
            len[i] = count;
            count = 0;
            i++;
        }
        else
        {
            count++;
        }
        ptr++;
    }
    len[i] = count;
    len[++i] = -1;

    horizontalPrint(len);
    verticalPrint(len);
    return 0;
}


