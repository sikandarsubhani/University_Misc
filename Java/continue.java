class Main{
public static void main(String[] args){
first :
for(int i=0;i<4;i++){

second :
for(int j=0;j<3;j++){
if(j==1){System.out.println("continue called");continue first;}	//whenever j =1 label will break
System.out.println(i+" "+ j);
}
if(i==2){System.out.println("first Break called");break first;}		//whenever i =2 label will break
}
}
}
