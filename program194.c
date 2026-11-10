#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 97; iCnt <= 122; iCnt++)
    {
        printf("%c\n",iCnt);  // %c gives the character from a to z
    }


    return EXIT_SUCCESS;
}