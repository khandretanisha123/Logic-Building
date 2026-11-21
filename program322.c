#include<stdio.h>
#include<stdlib.h>


int main()
{
    // Dyanamic Array 

    int *ptr = NULL ; // pointer
    int iSize = 0 ;

    printf("Enter number of Element you want : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int)*iSize);
    

    return EXIT_SUCCESS;
}