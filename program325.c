#include<stdio.h>
#include<stdlib.h>


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
    printf("Enter the elements: \n"); 
    for(iCnt = 0 ; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of arrays : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    

    // step3 : free the memory
    free(ptr);

    return EXIT_SUCCESS;
}