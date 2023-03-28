import java.util.Scanner;
class Input {
    public static void main(String[] args) {
    	
        Scanner input = new Scanner(System.in);
    	
        System.out.print("Enter an integer: ");
        int number = input.nextInt();
        System.out.println("You entered " + number);	// + sign concatenates the output 
	//-----------------------------------------------------
	System.out.print("Enter a Float: ");
        float f = input.nextFloat();
        System.out.println("You entered " + f);
        //-----------------------------------------------------
	System.out.print("Enter a Double: ");
        double d = input.nextDouble();
        System.out.println("You entered " + d);
        //-----------------------------------------------------
	System.out.print("Enter a String : ");
        String s = input.next();
        System.out.println("You entered " + s);
        //-----------------------------------------------------
        input.close();		// closing the scanner object
    }
}
