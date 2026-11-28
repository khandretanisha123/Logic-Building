#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

// linera search algorithm
BOOL SearchElement(int Arr[],int  iLength, int iNo)
{
    int iCnt = 0;
    bool bflag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
          bflag = true;
          break ;               //Early Exit
        
        }
    }
    return bflag;
}

//Time complexicity is O(n) 

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0 , iValue = 0;
    BOOL bRet = false;

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

    bRet = SearchElement(ptr,iSize,iValue);
    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    free(ptr);

    return EXIT_SUCCESS;
}