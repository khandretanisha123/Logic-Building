#include<stdio.h>
#include<stdlib.h>

//4
//4     3       2       1

void Display(int iNo)
{
    int iCnt = 0 ;
    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");

}
int main()
{
    int iValue = 0 ;

    printf("Enter frequence:\n");
    scanf("%d",&iValue);
    Display(iValue);

    return EXIT_SUCCESS;
}