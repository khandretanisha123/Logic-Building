#include<stdio.h>
#include<stdlib.h>

void Display(int *ptr)  // recevide in pointer
{
    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
    printf("%d\n",ptr[4]);


}

int main()
{
    int Arr[5] = {11, 21 ,51 ,101, 111}; //static array

    Display(Arr);     // Display(address);

    return EXIT_SUCCESS;
}