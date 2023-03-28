//similar with c/c++ syntax, same datatypes and convention for naming variables
class DataTypes {
    public static void main(String[] args) {
    int i=20; 		//integer
    float f=3.4F;	//float
    double d=3.445e2;	//double
    char c='J';		//character type
    long l=1979090898;
    boolean b=true;	//boolean (bool)
    //-------------------------------------------
    int bin=0b00001111001;	//Binary representation 
    int oct=026;		//Octal representation
    int dec=22;			//Decimal representation
    int hex=0x3FFF;		//Hexa-Decimal representation
    System.out.printf("i=%d\nf=%2f\nd=%f\nc=%c\nl=%d\n\n",i,f,d,c,l);
    System.out.printf("bin=%d\noct=%d\ndec=%d\nhex=%d\n",bin,oct,dec,hex);
    }
}
