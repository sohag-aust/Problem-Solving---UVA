
/**

CATALAN NUMBER ....

PRINCIPLES: (2N)! / (N+1)!

*/


import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);

        int n,n1,n2;
        BigInteger fact1,fact2;

        while(sc.hasNext()){

            fact1 = BigInteger.ONE;
            fact2 = BigInteger.ONE;

            n = sc.nextInt();

            if(n==0) break;

            n1 = 2*n;
            n2 = n+1;

            for(int i=1; i<=n1; i++)
            {
                fact1 = fact1.multiply(BigInteger.valueOf(i));
            }

            for(int i=1; i<=n2; i++)
            {
                fact2 = fact2.multiply(BigInteger.valueOf(i));
            }

            BigInteger res = fact1.divide(fact2);

            System.out.println(res);
        }
    }
}

