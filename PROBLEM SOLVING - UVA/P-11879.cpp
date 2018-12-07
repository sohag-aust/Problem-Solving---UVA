
import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        BigInteger num,res;

        while(sc.hasNext())
        {
            num=sc.nextBigInteger();

            if(num.compareTo(BigInteger.ZERO)==0)
                break;

            res=num.mod(BigInteger.valueOf(17));

            if(res.compareTo(BigInteger.ZERO)==0)
                System.out.println("1");
            else
                System.out.println("0");
        }
    }
}
