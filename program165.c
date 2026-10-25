//8967   

/////////////////////////////////
//  Output:
//
//  Odd : 7
//  Even : 6
//  Odd : 9
//  Even : 8
//
//////////////////////////////


//Display odd Digits
 
#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0 ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0 )
    {
        iDigit = iNo % 10 ;

        if((iDigit % 2) != 0)
        {
            printf("Odd : %d\n",iDigit);
        }
       else
       {
            printf("Even : %d\n",iDigit);
       }
        iNo = iNo/10 ;
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number: ");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}