#include<stdio.h>
#include<stdlib.h>

// user define function 

int CountVowelsX(char *str)
{
    int iCount = 0 ;
    while (*str != '\0')
    {
        // Case sensative 

        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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

    iRet = CountVowelsX(Arr);
    printf("Frequency of Vowels is : %d\n",iRet);

    return EXIT_SUCCESS;
}
