#include<iostream>
using namespace std ;


class Arithematic
{
    public:
        double No1;       
        double No2;       

        Arithematic:: Arithematic(double A, double B)  ;
    
        double Arithmatic :: Addition();

        double Arithmatic :: Substration() ;
};

Arithematic(double A, double B)  
{
    No1 = A;
    No2 = B;
}

Addition()             
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

double Arithematic :: Substration()             
{
    double Ans;
    Ans = No1 - No2;
    return Ans;
}
int main()
{ 
    Arithematic aobj1(10.5,11.6);
    Arithematic aobj2(20.5,21.6);


    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    cout<<aobj1.Substration()<<"\n";
    cout<<aobj2.Substration()<<"\n";

    return EXIT_SUCCESS ;
}