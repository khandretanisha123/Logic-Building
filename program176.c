//Pallindrom
// 8998
// 70007
// 12321

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0 ;
    int iRev = 0 ;
    int icopy = iNo;

    while (iNo != 0 )
    {
        iDigit = iNo % 10 ;
        iRev = (iRev*10) + iDigit ;
        iNo = iNo / 10 ;
    }

    return (icopy == iRev) ;
}
int main()
{
    int iValue = 0 ; 
    bool bRet = false ;


    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("Number is pallindrome\n");
    }
    else
    {
        printf("Number is Not Pallindrome\n");
    }
    

    
    return EXIT_SUCCESS;
}