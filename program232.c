#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    //String initialization 
    
    char Arr[20] = "Ganesh Pune";

    printf("%s\n",Arr);
    printf("Size of Array is : %d\n",sizeof(Arr));          // \0 is in the memory

    printf("length of String is : %d\n",strlen(Arr));       // \0 is not Count 

    return EXIT_SUCCESS;
}