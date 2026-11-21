#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Arr[4] = {0}; //local Array 0 don't take garbage value through complete array 
    int iCnt = 0 ;

    printf("Enter the elements of array:\n");

    
    scanf("%d",&Arr[0]);   //  Ex :address of  arr[0] is 100
    scanf("%d",&Arr[1]);    // address of  arr[1] is 104
    scanf("%d",&Arr[2]);    // address of  arr[2] is 108
    scanf("%d",&Arr[3]);    // address of  arr[3] is 112
    
    printf("Elements of the array are :\n");
    for(iCnt = 0 ; iCnt < 4 ; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }

    return EXIT_SUCCESS;
}