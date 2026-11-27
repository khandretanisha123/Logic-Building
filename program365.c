#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[],int  iLength, int iNo)
{
    int iCount = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    
    return iCount;
}
int main()
{
    int *ptr = NULL ;
    int iSize = 0, iCnt = 0 , iRet = 0 ;

    printf("Enter Number of Element : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));             //Allocated memory
    if(NULL == ptr)                                        
    {
        printf("Error: Unbale to allocated memory");
        return EXIT_FAILURE ;                           
    }

    printf("Enter the element :\n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    //Function Call 
    iRet = CountFrequency(ptr,iSize,11);
    printf("Frequency of 11 is : %d\n",iRet);

    // free the memory
    free(ptr);

    return EXIT_SUCCESS ;
}