#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Jay Ganesh";

    char *ptr = NULL ;          //pointer

    ptr = &(Arr[0]);            //space is count in the pointer

    while(*ptr != '\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }

    
    return EXIT_SUCCESS;
}