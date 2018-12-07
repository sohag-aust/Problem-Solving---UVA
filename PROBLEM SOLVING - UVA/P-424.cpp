
import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        BigInteger a,sum;

        sum=BigInteger.ZERO;

        while(sc.hasNext())
        {
            a=sc.nextBigInteger();

            if(a.compareTo(BigInteger.ZERO)==0)
                break;

            sum=sum.add(a);

        }
        System.out.println(sum);
    }
}
