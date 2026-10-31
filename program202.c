//input 4
//    A     B       C       D

#include<stdio.h>
#include<stdlib.h>


void Pattern(int iNO)
{
    int iCnt = 0 ;
    char ch = '\0';

    ch = 'A';

    for(iCnt = 1 ; iCnt <= iNO ; iCnt ++)
    {
        printf("%c\t",ch);
        ch++;
    }

    printf("\n");
}
int main()
{
   int iVaue = 0 ;

   printf("Enter the value : \n");
   scanf("%d",&iVaue);

   Pattern(iVaue);

    return EXIT_SUCCESS ;
}