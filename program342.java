import java.util.Scanner;

class program342
{
    public static  void main(String A[])
    {
        //int Arr[5] = {0};   // error

        int Arr[] = new int[5];

        int iCnt = 0 ;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter elements ");
         for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt]= scanner.nextInt();
        }

        System.out.println("Element of Array is :");
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}