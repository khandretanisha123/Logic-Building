#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No1 = 0XAD56 ;
    int No2 = 0XFd77 ;

    int Ans = 0 ;
    
    Ans = No1 | No2;

   printf("%u\n",Ans);   

   
    return EXIT_SUCCESS;
}