
import java.util.Scanner;
import java.math.BigInteger;

public class Main
{

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        while(sc.hasNext())
        {
            int N;
            BigInteger A,sum,res1,res2;

            N=sc.nextInt();
            A=sc.nextBigInteger();

            sum=BigInteger.ZERO;

            for(int i=1; i<=N; i++)
            {
                res1=A.pow(i);
                res2=res1.multiply(BigInteger.valueOf(i));
                sum=sum.add(res2);
            }

            System.out.println(sum);
        }

    }
}
