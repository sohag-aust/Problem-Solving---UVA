

import java.util.Scanner;
import java.math.BigInteger;

public class Main
{

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int test;
        int num;
        int set, cnt;

        BigInteger m;
        BigInteger res;

        test = sc.nextInt();
        for (int i = 1; i <= test; i++)
        {
            cnt = 0;
            m = sc.nextBigInteger();

            set = sc.nextInt();

            for (int j = 1; j <= set; j++)
            {
                res = BigInteger.ZERO;

                num = sc.nextInt();

                res = m.mod(BigInteger.valueOf(num));

                if (res.compareTo(BigInteger.valueOf(0)) == 0)
                {
                    cnt++;
                }
            }

            if (cnt == set)
            {
                System.out.println(m + " - Wonderful.");
            }
            else
            {
                System.out.println(m + " - Simple.");
            }
        }

    }
}
