#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[] , int iLength)
{
    int Cnt = 0 ;

    int iCnt = 0 ,iMax = 0 ;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}
 
int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0 , iRet = 0;
  
    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    if(NULL == ptr)    
    {
        printf("Error:unable to alloacate memory\n");
        return EXIT_FAILURE;
    }

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Minimum(ptr , iSize);
    printf("Minimum element is : %d\n",iRet);

    free(ptr);

    return EXIT_SUCCESS;
}