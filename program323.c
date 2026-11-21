#include<stdio.h>
#include<stdlib.h>


int main()
{
    // Dyanamic Array 

    int *ptr = NULL ; // pointer
    int iSize = 0 ;

    printf("Enter number of Element you want : \n");
    scanf("%d",&iSize);

    //step1 : Allocate the Memory
    ptr = (int *)malloc(sizeof(int)*iSize);

    // Step2 : Use the memory


    // step3 : free the memory
    free(ptr);

    return EXIT_SUCCESS;
}