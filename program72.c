#include<stdio.h>
#include<stdlib.h>

//4
//1     2       3       4

void Display(int iNo)
{
    int iCnt = 0 ;
    for(iCnt=1; iCnt<=iNo; iCnt++)
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