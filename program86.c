

/*
    ---------------------------------------------------
                operation &&
    ------------------------------------------------
    Result1          Result2        Final Result
    -------------------------------------------------
    True            True              True
    True            False             True
    False           True              True
    False           False             False
    ----------------------------------------------------


*/
#include<stdio.h>
#include<stdlib.h>

void CheckDIvisible(int iNo)
{
    if(((iNo % 5)==0) || ((iNo % 3)==0))  
    {
        printf("It is divisible \n");
    }
    else
    {
        printf("It is not divisible \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    CheckDIvisible(iValue);

    return EXIT_SUCCESS;
}
