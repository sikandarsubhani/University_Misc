// Same syntax of "conditional statments" as of C/C++. And same scope visibility as in C/C++
//here lets compare two numbers
import java.util.Scanner;
class Conditional{
public static void main(String[] args){
int num1,num2;	// num1,num2= operands
Scanner input = new Scanner(System.in);
System.out.print("enter number : ");
num1=input.nextInt();
System.out.print("enter number : ");
num2=input.nextInt();

boolean result = (num1==num2)? true : false;

System.out.println(result);
}
}
