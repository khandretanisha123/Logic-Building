#include<stdio.h>
#include<stdlib.h>

// user define function 

int CountX(char *str)
{
    int iCount = 0 ;
    while (*str != '\0')
    {
        // Case insensative 

        if((*str == 'A') || (*str == 'a'))
        {
            iCount++ ;
        }
        str++ ;
    }

    return iCount ;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0 ;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountX(Arr);
    printf("Frequency of 'a' or 'A' is : %d\n",iRet);

    return EXIT_SUCCESS;
}
