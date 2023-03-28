// Same syntax of "do-While loop" as of C/C++. And same scope visibility as in C/C++
//here lets create a basic calculator
import java.util.Scanner;
class Main{
public static void main(String[] args){
int num1,num2,op;	// num1,num2= operands		op = operator
Scanner input = new Scanner(System.in);
System.out.print("enter number : ");
num1=input.nextInt();
System.out.print("enter number : ");
num2=input.nextInt();
System.out.print("1 = Addition (+)\n2 = Subtraction (-)\n3 = Multiplication (*)\n4 = Division (/)\n5 = Modulus (%)\n\n0 = exit\n\nEnter operator : ");
op=input.nextInt();
do{
if(op==1)
System.out.println(num1 + " + " + num2 + " = " + (num1+num2));

else if(op==2)
System.out.println(num1 + " - " + num2 + " = " + (num1-num2));

else if(op==3)
System.out.println(num1 + " * " + num2 + " = " + (num1*num2));

else if(op==4)
System.out.println(num1 + " / " + num2 + " = " + (num1/num2));

else if(op==5)
System.out.println(num1 + " % " + num2 + " = " + (num1%num2));
else 
System.out.println("invalid");

System.out.print("\nenter number : ");
num1=input.nextInt();
System.out.print("enter number : ");
num2=input.nextInt();
System.out.print("\n0 = exit\nEnter operator : ");
op=input.nextInt();
}while(op!=0);
}
}
