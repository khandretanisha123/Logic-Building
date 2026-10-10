
// 
//#define EXIT_SUCCESS == 0 
//#define EXIT_FAILUER == -1 

#include<stdio.h>
#include<stdlib.h>

int Addtion(
                int ino1,  //first input
                int ino2   //second input
            )
{
    int iAns =0;

    iAns= ino1+ino2; ///business logic

    return iAns;

}
int main()
{
    int iValue1=0 ,iValue2=0, iresult=0;

    printf("enter first number : \n");
    scanf("%d",&iValue1);

    printf("enter second number : \n");
    scanf("%d",&iValue2);

    iresult = Addtion(iValue1,iValue2) ;   

    
    printf("Addition is : %d\n ",iresult );

    return EXIT_SUCCESS;

}

