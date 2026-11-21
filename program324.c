#include <stdio.h>
#include<stdlib.h>

int main()
{
int *ptr = NULL;
int iSize = 0, iCnt = 0;
printf("Enter number of elements you want: \n");
scanf("%d",&iSize);


//step 1 - allocate the memory 
ptr = (int *)malloc(sizeof(int)*iSize);

 //step2 - use the memory 
printf("Enter the elements: \n"); 
for(iCnt = 0 ; iCnt<iSize; iCnt++)
{
scanf("%d",&ptr[iCnt]);
}


 // free the memory 
 free(ptr);

    return EXIT_SUCCESS;
}