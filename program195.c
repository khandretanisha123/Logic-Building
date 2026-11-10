#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 97; iCnt <= 122; iCnt++)
    {
        printf("%d\t%c\n",iCnt,iCnt);   // its give a to z with its Ascii Value
    }


    return EXIT_SUCCESS;
}