// summation of array element  

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[] , int iLength)   //  recevied ->  Display(pointer , value)
{
   int iCnt = 0 ;
   int iSum = 0 ;

   for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
   {
        iSum = iSum + Arr[iCnt] ;
   }

   return iSum ;
}

int main()
{
    // Dyanamic Array 

    int *ptr = NULL ; // pointer
    int iSize = 0 ;
    int iCnt = 0 ;
    int iRet = 0 ;

    printf("Enter number of Element you want : \n");
    scanf("%d",&iSize);

    //step1 : Allocate the Memory
    ptr = (int *)malloc(sizeof(int)*iSize);

    // Step2 : Use the memory
    printf("Enter the elements: \n"); 
    for(iCnt = 0 ; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Summation(ptr, iSize);
    printf("summation is %d ", iRet);

    // step3 : free the memory
    free(ptr);

    return EXIT_SUCCESS;
}