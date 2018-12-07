
import java.util.Scanner;
import java.math.BigInteger;

public class Main
{

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int M;
        BigInteger m, n;
        BigInteger fact_M, rev, sum;

        while (sc.hasNext())
        {
            M = sc.nextInt();
            rev = BigInteger.ZERO;
            sum = BigInteger.ZERO;

            fact_M = BigInteger.ONE;

            for (int i = 1; i <= M; i++)
            {
                fact_M = fact_M.multiply(BigInteger.valueOf(i));
            }

            while (fact_M.compareTo(BigInteger.ZERO) != 0)
            {
                rev = fact_M.mod(BigInteger.TEN);
                if (rev.compareTo(BigInteger.ZERO) != 0)
                {
                    sum = rev;
                    break;
                }

                fact_M = fact_M.divide(BigInteger.TEN);
            }

            if (M < 10)
            {
                System.out.println("    " + M + " -> " + sum);
            }
            else if (M >= 10 && M < 100)
            {
                System.out.println("   " + M + " -> " + sum);
            }
            else if (M >= 100 && M < 1000)
            {
                System.out.println("  " + M + " -> " + sum);
            }
            else if (M >= 1000 && M < 10000)
            {
                System.out.println(" " + M + " -> " + sum);
            }
            else
            {
                System.out.println("" + M + " -> " + sum);
            }
        }
    }
}

