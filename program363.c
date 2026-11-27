#include<stdio.h>
#include<stdlib.h>

int OddCount(int Arr[] , int iLength)              //necked Function and it is Hybrid
{                                                   //because it accept pointer and integer
    int iCnt = 0, iCount = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iCount++;
        }
    }

    return iCount;
}
int main()
{
    int *ptr = NULL ;
    int iSize = 0, iCnt = 0;
    int iRet = 0 ;

    printf("Enter Number of Element : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));             //Allocated memory
    if(NULL == ptr)                                        
    {
        printf("Error: Unbale to allocated memory");
        return EXIT_FAILURE ;                           //failure goes to operating system
    }

    printf("Enter the element :\n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Function Call 
    iRet = OddCount(ptr,iSize);
    printf("Odd number is : %d\n",iRet);


    // free the memory
    free(ptr);

    return EXIT_SUCCESS ;
}