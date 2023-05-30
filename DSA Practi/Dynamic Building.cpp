import java.util.Scanner;

public class Exeption {
    public static void main(String []args){
        int num1,num2,result;
        Scanner s=new Scanner(System.in);
        try{
            System.out.println("Enter first no\n");
            num1=s.nextInt();

            System.out.println("Enter second number\n");

            num2=s.nextInt();
            result=num1/num2;
            System.out.println("Division+"+result);
            //int X[]=new int[10];
            //X[15]=15;
        }
        catch(NumberFormatException e){
            System.out.println("Wrong input\n");

        }
        catch(ArithmeticException e){
            System.out.println("Denominator is ZERO\n");

        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array index is greater than9\n");
        }


    }
}
