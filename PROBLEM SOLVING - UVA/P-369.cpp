import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        int M,N,diff;
        BigInteger m,n;
        BigInteger fact_M,fact_N,fact_diff;

        while(sc.hasNext())
        {
            N=sc.nextInt();
            M=sc.nextInt();
            diff=N-M;

            if(N==0 && M==0)
                break;

            fact_N=BigInteger.ONE;
            fact_M=BigInteger.ONE;
            fact_diff=BigInteger.ONE;

            for(int i=1;i<=N;i++)
            {
                fact_N=fact_N.multiply(BigInteger.valueOf(i));
            }

            for(int i=1;i<=M;i++)
            {
                fact_M=fact_M.multiply(BigInteger.valueOf(i));
            }

            for(int i=1;i<=diff;i++)
            {
                fact_diff=fact_diff.multiply(BigInteger.valueOf(i));
            }

            m=fact_M.multiply(fact_diff);
            n=fact_N.divide(m);

            System.out.println(N+" things taken "+M+" at a time is "+n+" exactly.");
            //System.out.println(n);
        }
    }
}

