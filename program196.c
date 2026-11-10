#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 65; iCnt <= 90; iCnt++)
    {
        printf("%d\t%c\n",iCnt,iCnt); // it give A to Z with its Ascii Value
    }

    return EXIT_SUCCESS;
}