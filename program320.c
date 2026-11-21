#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iLength)   //  recevied ->  Display(pointer , value)
{
   int iCnt = 0 ;
   for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
   {
        printf("%d\n",Arr[iCnt]);
   }
}

int main()
{
    int Brr[5] = {11,21,51,101,111}; //static array

    Display(Brr , 5);     // Display(address , length);

    return EXIT_SUCCESS;
}