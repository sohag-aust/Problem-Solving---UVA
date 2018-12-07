

import java.math.BigInteger;
import java.util.Scanner;

public class Main
{

    public static void main(String args[])
    {
        int t1, t2, k = 0;

        BigInteger val, sum, res;

        Scanner sc = new Scanner(System.in);

        while (sc.hasNext())
        {

            t1 = sc.nextInt();
            t2 = sc.nextInt();

            sum = BigInteger.ZERO;
            res = BigInteger.ZERO;

            if (t1 == 0 && t2 == 0)
            {
                break;
            }

            for (int i = 1; i <= t1; i++)
            {
                val = sc.nextBigInteger();
                sum = sum.add(val);
            }

            res = sum.divide(BigInteger.valueOf(t2));

            ++k;

            System.out.println("Bill #" + k + " costs " + sum + ": each friend should pay " + res+"\n");
        }
    }
}
