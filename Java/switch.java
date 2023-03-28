// Same syntax of "switch statment" as of C/C++. And same scope visibility as in C/C++
//here lets create a basic calculator
import java.util.Scanner;
class Switch{
public static void main(String[] args){
int num1,num2,op;	// num1,num2= operands		op = operator
Scanner input = new Scanner(System.in);
System.out.print("enter number : ");
num1=input.nextInt();
System.out.print("enter number : ");
num2=input.nextInt();
System.out.print("1 = Addition(+)\n2 = Subtraction(-)\n3 = Multiplication(*)\n4 = Division(/)\n5 = Modulus(%)\n\nEnter operator : ");
op=input.nextInt();
switch(op){
case 1: 
System.out.println(num1 + " + " + num2 + " = " + (num1+num2));
break;

case 2:
System.out.println(num1 + " - " + num2 + " = " + (num1-num2));
break;

case 3:
System.out.println(num1 + " * " + num2 + " = " + (num1*num2));
break;

case 4:
System.out.println(num1 + " / " + num2 + " = " + (num1/num2));
break;
case 5:
System.out.println(num1 + " % " + num2 + " = " + (num1%num2));
break;

default :
System.out.println("Invalid Input\nTry Again!");
break;
}
}
}
