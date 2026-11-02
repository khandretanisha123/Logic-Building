

#include<stdio.h>
#include<stdlib.h>

// user define function 

void CountFrequency(char *str)
{
    int iCountSmall , iCountCapital , iCountDigits , iCountSpecial = 0 ;

    while (*str != '\0')
    {
        if((*str >= 'A') || (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else if((*str >= 'a') || (*str <= 'z') )
        {
            iCountSmall++ ;
        }
        else if( (*str >= '0') || (*str <= '9'))
        {
            iCountDigits++;
        }
        else
        {
            iCountSpecial++ ;
        }

        str++ ;
    }

    printf("number of Capital letter is : %d\n",iCountCapital);
    printf("Number of small letter is : %d\n",iCountSmall);
    printf("Number of Digits is : %d\n",iCountDigits);
    printf("Number of Special Symbole is : %d\n",iCountSpecial);

}
int main()
{
    char Arr[100] = {'\0'};
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountFrequency(Arr);

    return EXIT_SUCCESS;
}
