/* program to convert muliple white spaces to a single white space */
#include "header.h"

int main()
{
    char a[] = "ab    cd    ef";
    char b[BUFFERSIZE];

    char *p = a; /*pointer for original array */
    char *t = b; /*pointer for new array */
    int flag = 0;

    while(*p != '\0')
    {
        if(*p == ' ')
        {
            if (flag == 1)
            {
                p++;
                continue;
            }    
            else
            {
                *t = *p;
                t++;
                p++;
                flag = 1;
            }
        }
        else
        {
            *t = *p;
            p++;
            t++;
            flag = 0;
        }
    }    
    *t = '\0';   
    printf("New string = %s\n",b);
    return 1;
}    
