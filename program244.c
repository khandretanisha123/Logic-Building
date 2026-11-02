#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Inbuilt function 

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0 ;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);
    printf("String length is : %d\n",iRet);

    return EXIT_SUCCESS;
}
