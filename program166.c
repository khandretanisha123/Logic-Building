// Sum of Digits

#include<stdio.h>
#include<stdlib.h>

int SumDigits(int iNo)
{
    int iDigit = 0 ;
    int iAddition = 0 ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0 )
    {
        iDigit = iNo % 10 ;

        iAddition = iAddition +iDigit;

        iNo = iNo/10 ;
    }

    return iAddition;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);
    printf("Summation is : %d",iRet);

    return EXIT_SUCCESS;
}