#include<iostream>
using namespace std;

int Summation(int Arr[] , int iLength)   //  recevied ->  Display(pointer , value)
{
   int iCnt = 0 ;
   int iSum = 0 ;

   for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
   {
        iSum = iSum + Arr[iCnt] ;
   }

   return iSum ;
}
float Average(int Arr[] , int iLength)   //  recevied ->  Display(pointer , value)
{
   int iCnt = 0 ;
   int iSum = 0 ;

   for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
   {
        iSum = iSum + Arr[iCnt] ;
   }

   return (float)iSum/(float)iLength ;
}

int main()
{
    int *ptr = NULL ;
    int iSize = 0 ;
    int iCnt = 0 ;
    int iRet = 0 ;
    float fRet = 0.0f ;

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

    iRet = Summation(ptr , iSize);
    cout<<"Summation of Array Element is : "<<iRet<<endl;

    fRet = Average(ptr , iSize);
    cout<<"Average of Array element is :"<<fRet <<endl ;



    //step3 : free the memory
    delete [] ptr ;              


    return EXIT_SUCCESS ;
}
