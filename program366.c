#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[],int  iLength, int iNo)
{
    int iCount = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    
    return iCount;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;

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

    printf("Enter the number that you to searech :\n");
    scanf("%d",&iValue);

    iRet = CountFrequency(ptr,iSize,iValue);//hybride

    printf("Frequency is :%d\n",iRet);

    free(ptr);

    return EXIT_SUCCESS;
}