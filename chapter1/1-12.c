/* Program to print one word at a time in a line */
#include "header.h"

/* Static Functions */
/*****************************************
FUNCTION   : To memset a buffer to be reused
INPUT ARGS : Pointer to char
OUTPUT ARGS: [None]
******************************************/
static void clearBuffer(char *out)
{
    if (out == NULL)
    {
        printf("Null buffer passed\n");
        return;
    }
    memset(out,'\0',BUFFERSIZE);
    return;
}

/*****************************************
FUNCTION   : To print a buffer to be STDOUT
INPUT ARGS : Pointer to Char
OUTPUT ARGS: [None]
******************************************/
static void printBuffer(char *out)
{
    if(out == NULL)
    {
        printf("Null buffer passed\n");
        return;
    }
    printf("%s\n",out);
    return;
}

int main()
{
    char a[] = "Print one word at a time in a new line";
    char *ptr = a;
    char out[BUFFERSIZE];
    char *tmp = out;
    
    clearBuffer(out);

   printf("*ptr == %c\n",*ptr);
    while((*ptr) != '\0');
    {
       printf("*ptr == %c\n",*ptr);
       if((*ptr == ' ') || (*ptr == '\n') || (*ptr == '\t'))
        {
            printBuffer(out);
            clearBuffer(out);
            tmp = out;
        }
        else
        {
            *tmp = *ptr;
            tmp++;
        }
        ptr++;
    }

    return 0;
}    

