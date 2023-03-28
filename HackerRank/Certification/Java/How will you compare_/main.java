import java.util.Scanner;
import java.util.Arrays;


/*Write your code here. DO NOT use access modifiers (e.g.: 'public') in your class declarations.*/

class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int testCases = scan.nextInt();
        while(testCases-- > 0){
            int condition =scan.nextInt();
            switch(condition){
                case 1:
                    scan.nextLine();
                    String s1=scan.nextLine();
                //	    scan.nextLine();
                    String s2=scan.nextLine();
                    
                    System.out.println( (s1.equals(s2) ? "Same" : "Different" ));
                    break;
                case 2:
                    int num1 = scan.nextInt();
                    int num2 = scan.nextInt();
                    
                    System.out.println( (num1==num2) ? "Same" : "Different");
                    if(scan.hasNext()){ // avoid exception if this last test case
                        scan.nextLine(); // eat space until next line
                    }
                    break;
                case 3:
                    // create and fill arrays
                    int[] array1 = new int[scan.nextInt()];
                    int[] array2 = new int[scan.nextInt()];
                    for(int i = 0; i < array1.length; i++){
                        array1[i] = scan.nextInt();
                    }
                    for(int i = 0; i < array2.length; i++){
                        array2[i] = scan.nextInt();
                    }
                    
                    System.out.println((Arrays.equals(array1, array2)) ? "Same" : "Different");
                    /*if(scan.hasNext()){ // avoid exception if this last test case
                        scan.nextLine(); // eat space until next line
                    }*/
                    break;
                default:
                    System.err.println("Invalid input.");
            }// end switch
        }// end while
        scan.close();
    }
}
