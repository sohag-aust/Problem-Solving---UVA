import java.math.BigInteger;
import java.util.Scanner;

public class Main{
    public static void main(String args[]) {

    	BigInteger a,b;

    	Scanner sc = new Scanner(System.in);

    	while(sc.hasNext())
    	{
    		a = sc.nextBigInteger();
    		b = sc.nextBigInteger();

    		System.out.println(a.multiply(b));
    	}
    }
}
