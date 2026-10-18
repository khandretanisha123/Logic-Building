
#include<stdio.h>
#include<stdlib.h>

void CheckDIvisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("It is divisible by 5\n");
    }
    else
    {
        printf("It is not divisible by 5\n");
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
