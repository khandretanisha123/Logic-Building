#include<stdio.h>
#include<stdlib.h>

void CheckDIvisible(int iNo)
{
    //logic
    if((iNo%3) == 0)
    {
        printf("It is divisible by 3\n");
    }else
    {
        printf("It is not divisible by 3\n");
    }
}
int main()
{
    int iValue=0;

    printf("enter number : \n");
    scanf("%d\n",&iValue);

    CheckDIvisible(iValue);

    return EXIT_SUCCESS;
}