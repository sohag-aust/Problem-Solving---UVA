
import java.math.BigInteger;
import java.util.Scanner;

public class Main
{

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        BigInteger num, sum, res, sum1;

        while (sc.hasNext())
        {

            res = BigInteger.ZERO;
            sum = BigInteger.ZERO;
            sum1 = BigInteger.ZERO;

            num = sc.nextBigInteger();

            if (num.compareTo(BigInteger.valueOf(0)) == 0)
            {
                System.out.println("1");
            }

            else
            {
                res = num.subtract(BigInteger.valueOf(1));


                sum = num.multiply(res);


                sum1=sum.add(BigInteger.valueOf(2));
                System.out.println(sum1);
            }
        }
    }
}

