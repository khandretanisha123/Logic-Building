#include<stdio.h>
#include<stdlib.h>

void Display(int *ptr)  // recevide in pointer
{
    printf("%d\n",*ptr);  

}

int main()
{
    int Arr[5] = {10, 20 ,30 ,40 , 50}; //static array

    printf("%d\n",Arr); // Address

    Display(Arr);     // Display(address);

    return EXIT_SUCCESS;
}