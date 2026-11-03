#include<iostream>
using namespace std ;


class Arithematic
{
    public:
        float No1;       // Data members
        float No2;       // Data members

        Arithematic(float A, float B)  // Constructor
        {
            No1 = A;
            No2 = B;
        }

        int Addition()             // Member function
        {
            float Ans;
            Ans = No1 + No2;
            return Ans;
        }
};
int main()
{ 
    Arithematic aobj1(10.0,11.0);
    Arithematic aobj2(20.0,21.0);


    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    return EXIT_SUCCESS ;
}