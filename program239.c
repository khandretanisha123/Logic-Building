#include<stdio.h>
#include<stdlib.h>

void Display(char str[]) //it recevied in base address
{
    printf("%s\n",str);
}
int main()
{
    char Arr[] = "Ganesh";

    //call by address
    Display(Arr);        //Arr == Base Addres or Display(100)  
                        //  100 == base address

    return EXIT_SUCCESS;
}
