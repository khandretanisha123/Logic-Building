#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iLength)   //  recevied ->  Display(pointer , value)
{
   int iCnt = 0 ;

   printf("Element of the array are :\n");
   for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
   {
        printf("%d\n",Arr[iCnt]);
   }
}

int main()
{
    // Dyanamic Array 

    int *ptr = NULL ; // pointer
    int iSize = 0 ;
    int iCnt = 0 ;

    printf("Enter number of Element you want : \n");
    scanf("%d",&iSize);

    //step1 : Allocate the Memory
    ptr = (int *)malloc(sizeof(int)*iSize);

    // Step2 : Use the memory
    printf("Enter the elements :\n");
    for(iCnt = 0 ; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iSize);

    // step3 : free the memory
    free(ptr);

    return EXIT_SUCCESS;
}