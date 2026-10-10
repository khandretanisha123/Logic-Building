#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue=0;

    printf("enter number : \n");
    scanf("%d",&ivalue);

    if((ivalue%2) == 0)
    {
        printf("It is even Number \n");
    }
    else{
        printf("It is odd Number ");
    }
    return EXIT_SUCCESS;
}