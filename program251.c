#include<stdio.h>
#include<stdlib.h>

// user define function 

int CountSpaceX(char *str)
{
    int iCount = 0 ;
    while (*str != '\0')
    {
        // Case insensative 

        if((*str == ' '))
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

    iRet = CountSpaceX(Arr);
    printf("Frequency of White Space is : %d\n",iRet);

    return EXIT_SUCCESS;
}
