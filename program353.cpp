#include<iostream>
using namespace std ;

class Number
{
    private :
        int *Arr ;                  //pointer  == 8byte allocated charcater
        int iLength ;               // 4 bytes 

    public:
        Number(int iSize)                // constructor allocated the resoure(Arr) memory 
        {
            cout<<"Inside Constructor\n";
            this->iLength = iSize ;
            this->Arr = new int[iLength];

        }

        ~Number()                      //distructor
        {
            cout<<"Inside Distructor\n";
            delete [] this->Arr;
        }

        void Accept()                       // Setter
        {
            int iCnt = 0 ;
            cout<<"Enter the element :\n";
            for(iCnt = 0 ; iCnt <iLength ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()                            //getter
        {
            int iCnt = 0 ;
            cout<<"Element of the array are :\n";
            for(iCnt = 0 ; iCnt <iLength ; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }
};

int main()
{
    int iSize = 0 ;
    cout<<"Enter number of elements :\n";
    cin>>iSize;

    //step1 : Allocated memory
    Number *number1  = new Number(iSize);

   // number1-> Arr = NULL ;   // iSsue due to public pointer become null


    //Step2 : use the Memory
    number1->Accept();
    number1->Display();


    //Step2 : Deallocated memory
    delete number1;



    return EXIT_SUCCESS;
}