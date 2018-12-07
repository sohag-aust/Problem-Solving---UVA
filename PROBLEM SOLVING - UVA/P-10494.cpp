
import java.util.Scanner;
import java.math.BigInteger;

public class Main
{

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        BigInteger a, b, res;
        String ch;

        String s1 = "/";
        String s2 = "%";

        while (sc.hasNext())
        {

            res = BigInteger.ZERO;

            a = sc.nextBigInteger();
            ch = sc.next();
            b = sc.nextBigInteger();

            if (ch.equals(s1))
            {
                res = a.divide(b);
                System.out.println(res);
            }


            else if (ch.equals(s2))
            {
                res = a.mod(b);
                System.out.println(res);
            }
        }
    }
}

