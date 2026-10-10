#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("It is even Number \n");
    }
    else{
        printf("It is odd Number ");
    }
}
int main()
{
    int ivalue=0;

    printf("enter number : \n");
    scanf("%d",&ivalue);

    CheckEven(ivalue);
    
    return EXIT_SUCCESS;
}