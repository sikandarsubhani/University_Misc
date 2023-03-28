import java.util.Arrays;
class Copy_Array{
public static void main(String[]args){
int[] a={1,2,3,4,5};
int[] b={6,7,8,9,10};
int alen=a.length;
int blen=b.length;


int[] arr=new int[alen+blen];

System.arraycopy(a,0,arr,0,alen);	//copy a from index 0 to arr from index 0 till length of a
System.arraycopy(b,0,arr,alen,blen);	//copy b from index 0 to arr from length of a till length of b
System.out.println(Arrays.toString(arr));


}
}
