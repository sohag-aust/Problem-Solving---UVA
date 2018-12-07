
import java.util.Scanner;
import java.math.BigInteger;

public class Main
{

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        BigInteger N, res;
        int D;

        while (sc.hasNext())
        {
            N = sc.nextBigInteger();
            D = sc.nextInt();

            if ((N.compareTo(BigInteger.ZERO) == 0) && D == 0)
            {
                break;
            }

            res = N.pow(D);

            System.out.println(res);
        }

    }
}

