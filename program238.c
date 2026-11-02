#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Jay Ganesh";

    char *ptr = NULL ;          //pointer

    ptr = &(Arr[0]); 
    
    int iCount = 0 ;        //To count letter  in string space is also count

    while(*ptr != '\0')
    {
        iCount ++ ;
        ptr++;
    }

    printf("length of string is : %d\n",iCount);
    
    return EXIT_SUCCESS;
}