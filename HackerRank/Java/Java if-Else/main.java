import java.util.Scanner;
public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int i = scanner.nextInt();
        if(i % 2 ==1)
        System.out.println("Weird");
        
        if(i%2==0){
            if((i>=2 && i<=5) || i>20 )
            System.out.println("Not Weird");
            else if(i>=6 || i<=20)
            System.out.println("Weird");
        }
        scanner.close();
    }
}
