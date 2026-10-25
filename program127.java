
import java.util.Scanner;
public class program127
{
    public static void main (String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iRet = 0 ;
        Digit digit = new Digit();

        System.out.println("Enter number : ");
        int iValue = scanner.nextInt();
        
        digit.CountDigits(iValue);

        iRet = digit.CountDigits(iValue);

        System.out.println("Number of Digits : "+iRet);

    }
}

class Digit
{
    public  int  CountDigits(int iNo)
    {
        int iCount = 0 ;

        //updater
        if(iNo < 0 )
        {
            iNo = -iNo;
        }

        while(iNo != 0){
   
            iNo = iNo / 10 ;                       
            iCount ++;
        }
        return  iCount ;
    }
}
