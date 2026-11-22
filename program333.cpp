#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL ;
    int iSize = 0 ;

    cout<<"Enter number of element :\n";
    cin>>iSize;

    //step1 : Allocated the memory
    ptr = new int[iSize];

    //step2 : use the memory



    //step3 : free the memory
    delete ptr ;           // it only free 1st allocated memory


    return EXIT_SUCCESS ;
}
