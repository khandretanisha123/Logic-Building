#include<stdio.h>
#include<stdlib.h>

void EvenOddCount(int Arr[] , int iLength)              //necked Function and it is Hybrid
{                                                   //because it accept pointer and integer
    int iCnt = 0, iCountEven = 0, iCountOdd = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    printf("Number of Even Elements :%d , Odd Elements :%d \n",iCountEven,iCountOdd);
}
int main()
{
    int *ptr = NULL ;
    int iSize = 0, iCnt = 0;

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
    EvenOddCount(ptr,iSize);

    // free the memory
    free(ptr);

    return EXIT_SUCCESS ;
}