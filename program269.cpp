#include<iostream>
using namespace std ;

double Addition (double No1 , double No2)
{
    double Ans ;
    Ans = No1 + No2;
    return Ans ;
}

int main()
{
    double iValue1 = 0.0 , iValue2 = 0.0 ;
    double dRet = 0.0 ;

    cout<<"Enter first number : \n";
    cin>>iValue1 ;

    cout<<"Enter Second number : \n";
    cin>>iValue2 ;

    dRet = Addition(iValue1,iValue2) ;

    cout<< "Addition is : "<<dRet<<"\n";

    return EXIT_SUCCESS ;
}