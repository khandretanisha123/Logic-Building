#include<iostream>
using namespace std ;


class Arithematic
{
    public:
        double No1;       // Data members
        double No2;       // Data members

        Arithematic(double A, double B)  // Constructor
        {
            No1 = A;
            No2 = B;
        }

        int Addition()             // Member function
        {
            double Ans;
            Ans = No1 + No2;
            return Ans;
        }

        int Substration()             // Member function
        {
            double Ans;
            Ans = No1 - No2;
            return Ans;
        }
};
int main()
{ 
    Arithematic *aobj = new Arithematic(11,10);

    cout<<aobj->Addition()<<endl;

    return EXIT_SUCCESS ;
}