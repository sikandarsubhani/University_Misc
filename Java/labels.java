class Main{
public static void main(String[] args){
first :
for(int i=0;i<4;i++){
if(i==2){System.out.println("first Break called");break first;}		//whenever i =2 label will break
second :
for(int j=0;j<3;j++){
if(j==1){System.out.println("second Break called");break second;}	//whenever j =1 label will break
System.out.println(i+" "+ j);
}
}
}
}
