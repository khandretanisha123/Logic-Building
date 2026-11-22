#include<iostream>
using namespace std ;

class Number
{
    public :
        int *Arr ;                  //pointer  == 8byte allocated charcater
        int iLength ;               // 4 bytes 

        Number(int iSize)                // constructor allocated the resoure memory 
        {
            cout<<"inside Constructor\n";
            this->iLength = iSize ;
            this->Arr = new int[iLength];

        }

        ~Number()                      //distructor
        {
            cout<<"Inside Distructor\n";
            delete [] this->Arr;
        }
};

int main()
{
    //step1 : Allocated memory
    Number *number1  = new Number(5);
    Number *number2  = new Number(7);

    //Step2 : use the Memory


    //Step2 : Deallocated memory


    return EXIT_SUCCESS;
}