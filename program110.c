
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = 2 ; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            return false ;// return is not written inside the loop because instruction queue is block
        }
    }
    
    return true ;
}


int main(void)
{
  
    int iValue = 0 ;
    bool bRet = false ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet) ///bRet == true
    {
        printf("IT is Prime number");
    }
    else
    {
        printf("It is not a prime number");
    }

    return EXIT_SUCCESS;
}