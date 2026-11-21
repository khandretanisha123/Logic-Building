#include<stdio.h>
#include<stdlib.h>


int main()
{
    // Dyanamic Array 

    int *ptr = NULL ; // pointer

    ptr = (int *) malloc(sizeof(int)*5);
    //Ex: sizeofint=4 bytes (4*5(size of array))== 20 allocated 20 bytes 
    // (int *) fro typecasting 
 
    return EXIT_SUCCESS;
}