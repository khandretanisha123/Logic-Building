#include"Header.h"

//#define EXIT_SUCCESS == 0 
//#define EXIT_FAILUER == -1 

int main()
{
    int iValue1=0 ,iValue2=0, iresult=0;

    printf("enter first number : \n");
    if(scanf("%d",&iValue1) !=1)
    {
        fprintf(stderr,"Unable to proceed asInput is inavlid\n");

        return EXIT_FAILURE;
    }

    printf("enter second number : \n");
    if(scanf("%d",&iValue2) !=1)
    {
        fprintf(stderr,"Unable to proceed asInput is inavlid\n");

        return EXIT_FAILURE;
    }

    iresult = Addtion(iValue1,iValue2) ;   

    
    printf("Addition is : %d\n ",iresult );

    return EXIT_SUCCESS;

}

