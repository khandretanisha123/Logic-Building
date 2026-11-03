#include<iostream>
using namespace std ;

class Arithematic
{
    public:
        int No1;       // Data members
        int No2;       // Data members

        Arithematic(int A, int B)  // Constructor
        {
            No1 = A;
            No2 = B;
        }

        int Addition()             // Member function
        {
            int Ans;
            Ans = No1 + No2;
            return Ans;
        }
};
int main()
{ 
    Arithematic aobj(10,11);

    cout<<aobj.Addition()<<"\n";

    return EXIT_SUCCESS ;
}