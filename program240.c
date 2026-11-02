#include<stdio.h>
#include<stdlib.h>

void Display(char *str)    // it recevied in pointer 
{
    printf("%s\n",str);
}
int main()
{
    char Arr[] = "Ganesh";

    //call by address
    Display(Arr);       //it send in Address

    return EXIT_SUCCESS;
}
