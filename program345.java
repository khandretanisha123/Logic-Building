import java.util.Scanner;

class program345
{
    public static int Summation(int Arr[])
    {
        int iCnt = 0 ,iSum = 0 ;

        for(iCnt = 0 ; iCnt <Arr.length ; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum ;
    }
    public static  void main(String A[])
    {
        
        int iCnt = 0 , iSize = 0  , iRet = 0;
        int ptr[] = null ;                   // create a references 
        Scanner scanner = null ;

        scanner = new Scanner(System.in);

        System.out.println("Enter the number of Elements :");
        iSize = scanner.nextInt();

        //step1 : Allocated the memory
        ptr = new int[iSize];                

        //step2 : Use the memory
        System.out.println("Enter elements ");
         for(iCnt = 0 ; iCnt < ptr.length ; iCnt++)
        {
            ptr[iCnt]= scanner.nextInt();
        }

        System.out.println("Element of Array are :");
        for(iCnt = 0 ; iCnt < ptr.length ; iCnt++)
        {
            System.out.println(ptr[iCnt]);
        }

        iRet = Summation(ptr);
        System.out.println("Summation of Array elements is :"+iRet);

        //step3 : Deallocated the memory 
        scanner = null ;            
        ptr = null ;           // reference is 0

        System.gc();       // request for garbage to free the resource
    }


}