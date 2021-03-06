import java.math.*;
import java.util.*;


public class Main {

	static BigInteger[] b = new BigInteger[5020];

	public static void compute(){

		b[0] = BigInteger.valueOf(0);
		b[1] = BigInteger.valueOf(1);

		for(int i=2;i<=5010;i++){

			b[i] = b[i-2].add(b[i-1]);
		}
	}


	public static void main(String args[]){

		compute();

		Scanner sc = new Scanner(System.in);

		while(sc.hasNext()){

			int n;

			n = sc.nextInt();

			System.out.print("The Fibonacci number for "+n+" is ");
			System.out.println(b[n]);
		}
	}
}

