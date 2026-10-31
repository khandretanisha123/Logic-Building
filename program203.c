

#include<stdio.h>
#include<stdlib.h>


void Pattern(int iNO)
{
    int iCnt = 0 ;
    char ch = '\0';


    for(iCnt = 1,ch = 'A';iCnt <= iNO; iCnt ++,ch++)
    {
        printf("%c\t",ch);
        
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