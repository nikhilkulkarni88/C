/* Character,word and space counting program */
#include "header.h"

int main()
{
    char a[] = "There is one	tab space '\n',1 newline char";

    char *ptr = a;
    int state = OUT;
    int numWord = 0, numLine = 0, numChar = 0;
    
    while(*ptr != '\0')
    {
        numChar++;

        if(*ptr == '\n')
            numLine++;
        if((*ptr == ' ') || (*ptr == '\n') || (*ptr == '\t'))
            state = OUT;
        else if(state == OUT)
        {    
            state = IN;
            numWord++;
        }
        ptr++;
    }

    printf("# of Chars=%d,# of words = %d, #of newlines = %d\n",numChar,numWord,numLine);

    return 0;

}



