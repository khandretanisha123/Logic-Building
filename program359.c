#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL ;
    int iSize = 0, iCnt = 0;

    printf("Enter Number of Element : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));             //Allocated memory
    if(ptr = NULL)                                          //issue
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



    // free the memory
    free(ptr);

    return EXIT_SUCCESS ;
}