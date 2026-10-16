#include<stdio.h>
#include<stdlib.h>

//5
//1+2+3+4+5=15


int main()
{
   int iCnt = 0;
   int iSum = 0 ;

   iCnt = 1;
   iSum = iSum + iCnt;  //iSum=0+1-->1
   iCnt++;              //1


   iSum = iSum + iCnt;  //iSum=1+1-->2
   iCnt++;               // 2

   iSum = iSum + iCnt;  //iSum=2+1-->3
   iCnt++;              //3

   iSum = iSum + iCnt;   //iSum=3+3-->6
   iCnt++;                 //4

   iSum = iSum + iCnt;   //iSum=4+6-->10
   iCnt++;                 //5

   printf("%d\n",iSum);

    return EXIT_SUCCESS;
}