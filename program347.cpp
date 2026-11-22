#include<iostream>
using namespace std ;

class Number
{
    public :
        int *Arr ;                  //pointer  == 8byte allocated charcater
        int iLength ;               // 4 bytes 

        Number(int iSize)                // constractor allocated the resoure memory 
        {
            this->iLength = iSize ;
            this->Arr = new int[iLength];

        }

        ~Number()                      //destractor
        {
            delete [] this->Arr;
        }
};

int main()
{
    Number number1 (5);  
    Number number2 (7);                     


    return EXIT_SUCCESS;
}