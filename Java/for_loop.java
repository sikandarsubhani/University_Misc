// Same syntax of "For loop" as of C/C++. And same scope visibility as in C/C++
//here lets print triangle using nested for loops
class Main{
public static void main(String[] args){
for(int i=0;i<5;i++){
for(int j=0;j<=i;j++){
System.out.print("*");		//print right triangle
}
System.out.print("\n");
}
}
}
