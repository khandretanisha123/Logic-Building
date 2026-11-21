#include<stdio.h>
#include<stdlib.h>

void Display(int ptr[])  // it seen Array but it is pointer // pointer is treated as array 
{
    printf("%d\n",*ptr);  
    
    ptr++ ;
    printf("%d\n",*ptr);  
    
    ptr++ ;
    printf("%d\n",*ptr);  
    
    ptr++ ;
    printf("%d\n",*ptr);  
    

}

int main()
{
    int Arr[5] = {11, 21 ,51 ,101, 111}; //static array

    Display(Arr);     // Display(address);

    return EXIT_SUCCESS;
}