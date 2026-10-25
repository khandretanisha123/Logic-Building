import java.util.Scanner;

public class program121 
{
    public static void main (String A[])
    {
        Digit digit = new Digit();
        digit.DisplayDigits();

    }
}

class Digit
{
    public  void DisplayDigits()
    {
        int iNo = 175902 ;

        while(iNo != 0){
            System.out.println("Digit is : " +(iNo % 10));      
            iNo = iNo / 10 ;                    
            System.out.println("Number is : "+iNo);     
        }

    }
}
