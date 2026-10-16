
import java.util.Scanner;
public class program58
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int iVAlue =0;
        Iteration iteration = new Iteration();

        System.out.println("Enter the frequence: ");
        iVAlue = scanner.nextInt();

        iteration.Display(iVAlue);
    }
}

class Iteration
{
    public void Display(int iNo)
    {
        int iCnt=0;

        //input filter
        if(iNo<=0)     
        {
            System.out.println("Invalid Input");
            return ;
        }
        for(iCnt=1; iCnt<=iNo; iCnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    }
}