//Input:  6457      Output : 5.5  
//Input: 734        Output : 4.666667

#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit =0 , iCount = 0 , iSum = 0 ;
    float fAvg = 0.0f ;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10 ;
        iSum = iSum + iDigit;
        iCount ++ ;
        iNo = iNo /10 ;
    }
    
    fAvg = iSum / iCount ;   /// Need of Typecasting

    return fAvg;

}

int main()
{
    int iValue = 0 ;
    float fRet = 0 ;

    printf("Enter number: ");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);
    printf("Average of Digits : %f",fRet);

    return EXIT_SUCCESS;
}