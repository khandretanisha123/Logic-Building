/*
    step1:understend the problem statment
    step2:write the algrithms
    step3:decide the program language
    step4:write the program
    step5:test the program 

*/
////////////////////////////////////////////
//
//step1: understend the problem statment 
//       user is going to enter any 2 integers
//       and we have to perform addtinon
////////////////////////////////////////////

////////////////////////////////////////////
//  step2:write the algrithms
//

    /*
        Start
            accept first number as no1
            accept second number as no2
            create a variable as Ans to store a result 
            perform the addition and store into Ans
            display the result from Ans
        End 
    */
////////////////////////////////////////////
//   step3:decide the program language
//      we select Crogramming
///////////////////////////////////

//////////////////////////////////
//  step4:write the program
//   
///////////////////////////////

#include<stdio.h>

int Addtion(int ino1,int ino2)
{
    int iAns =0;

    iAns= ino1+ino2; ///business logic

    return iAns;

}
int main()
{
    int iValue1=0 ,iValue2=0, iresult=0;

    printf("enter first number : \n");
    scanf("%d",&iValue1);

    printf("enter second number : \n");
    scanf("%d",&iValue2);

    iresult = Addtion(iValue1,iValue2) ;   

    
    printf("Addition is : %d\n ",iresult );

    return 0;

}

//////////////////////////////////////
//
//  step5:test the program 
//   
//  tested test case
//   ----------------------------------------
//      intput1         intput2         output   
// -----------------------------------------------   
//      10                  11          21
//      11                  10          11
//      0                   11          11
//      20                  -9          11
//      -9                  20          11
//      -20                 -9          -31
// --------------------------------------------
//
//////////////////////////////////////////////////