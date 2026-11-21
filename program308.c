#include<stdio.h>
#include<stdlib.h>



int main()
{
    int Arr[5] = {10, 20 ,30 ,40 , 50}; //static array

    printf("%X\n",Arr);  
    printf("%X\n",&Arr);   
    printf("%X\n",&Arr[0]);  


    return EXIT_SUCCESS;
}