
//input : 4
// output : 1   a   2   b   3   c   4   d

#include<stdio.h>
#include<stdlib.h>


void Pattern(int iNO)
{
    int iCnt = 0 ;
    char ch = '\0';

    for(iCnt = 1,ch = 'a';iCnt <= iNO; iCnt ++,ch++)
    {
        printf("%d\t%c\t",iCnt, ch);
        
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