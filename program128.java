// Accept number from user and perform addition of digit 

import java.util.Scanner;
public class program128
{
    public static void main (String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iRet = 0 ;
        Digit digit = new Digit();

        System.out.println("Enter number : ");
        int iValue = scanner.nextInt();
        
        digit.SumDigits(iValue);

        iRet = digit.SumDigits(iValue);

        System.out.println("Summation of Digits : "+iRet);

    }
}

class Digit
{
    public  int  SumDigits(int iNo)
    {
        int iSum = 0 ;
        int iDigit = 0 ;

        //updater
        if(iNo < 0 )
        {
            iNo = -iNo;
        }

        while(iNo != 0){

            iDigit = iNo % 10 ;   
            iSum = iSum + iDigit ;
            iNo = iNo / 10 ;                    
        
        }
        return  iSum ;
    }
}
