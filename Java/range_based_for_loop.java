// Same syntax of "for-each loop"(also referred to as range based for loop in c/c++) as of C/C++. And same scope visibility as in C/C++
//here lets print an array and sum of array

class Main{
public static void main(String[] args){

int[] arr={3,9,88,1,-9,-2};
int sum=0;
for(int num : arr){
sum+=num;
System.out.println(num);
}
System.out.println("\n\nSum = "+sum);
}
}
