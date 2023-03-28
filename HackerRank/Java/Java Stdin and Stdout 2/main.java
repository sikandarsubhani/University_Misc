import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner input = new Scanner (System.in);
        input.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        int number = input.nextInt();
        double d = input.nextDouble();
        input.nextLine();              // gets rid of the pesky newline
        String s = input.nextLine();
        input.close();        // closing the scanner object
        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + number); 
    }
}
