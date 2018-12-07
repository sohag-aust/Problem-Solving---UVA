import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        int M;
        BigInteger m,n;
        BigInteger fact_M,fact_N,fact_diff;

        while(sc.hasNext())
        {
            M=sc.nextInt();

            fact_M=BigInteger.ONE;

            for(int i=1; i<=M; i++)
            {
                fact_M=fact_M.multiply(BigInteger.valueOf(i));
            }

            System.out.println(M+"!");
            System.out.println(fact_M);
        }
    }
}

