#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 65; iCnt <= 90; iCnt++)
    {
        printf("%d\t%o\t%x\t%c\n",iCnt,iCnt,iCnt,iCnt);

        // its gives 
        //
        //  Ascii value -> Ascii value in octal  ->  Ascii value in hexadecimal ->  Character
        //
        //    Ex :
        //          65  101   41  A
    }

    return EXIT_SUCCESS;
}