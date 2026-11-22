#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL ;
    int iSize = 0 ;
    int iCnt = 0 ;

    cout<<"Enter number of element :\n";
    cin>>iSize;

    //step1 : Allocated the memory
    ptr = new int[iSize];            // pointer is treated as array

    //step2 : use the memory
    cout<<"Enter the elements :\n";
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Element of the array are : \n";
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<ptr[iCnt]<<endl;
    }


    //step3 : free the memory
    delete [] ptr ;              


    return EXIT_SUCCESS ;
}
