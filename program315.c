#include<stdio.h>
#include<stdlib.h>

void Display(int ptr[])  
{
    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);    // segmentation fault  it give random value
    printf("%d\n",ptr[4]);    // segmentation fault  it give random value 
}

int main()
{
    int Arr[3] = {11, 21 ,51}; //static array

    Display(Arr);     // Display(address);

    return EXIT_SUCCESS;
}