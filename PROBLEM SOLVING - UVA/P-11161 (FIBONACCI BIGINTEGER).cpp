import java.math.BigInteger;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        BigInteger a = BigInteger.valueOf(1);
        BigInteger b = BigInteger.valueOf(1);
        BigInteger c,min_range,max_range,first,last,sum;
        BigInteger temp = BigInteger.valueOf(1);

        Map<BigInteger, String> mp = new HashMap<>();

        BigInteger cnt = BigInteger.valueOf(2);

        while(true)
        {
            c = a.add(b);
            a = b;
            b = c;
            cnt = cnt.add(BigInteger.valueOf(1));

            min_range = temp.add(BigInteger.ONE);
            max_range = temp.add(c);
            temp = temp.add(c);

            String s1 = min_range.toString();
            String s2 = max_range.toString();
            String str = s1 + ":";
            str = str + s2;

            mp.put(cnt, str);

            if(cnt.compareTo(BigInteger.valueOf(1500)) == 1)
                break;
        }

        BigInteger n;
        Scanner sc = new Scanner(System.in);

        int i=1;
        while(sc.hasNext())
        {
            n = sc.nextBigInteger();

            if(n.compareTo(BigInteger.ZERO) == 0)
                break;

            System.out.println("Set "+i+":");

            if(n.compareTo(BigInteger.valueOf(1)) == 0)
                System.out.println(0);
            else if(n.compareTo(BigInteger.valueOf(2)) == 0)
                System.out.println(1);

            else
            {
                String str = mp.get(n);
                int ind = str.indexOf(":");

                String st1 = str.substring(0,ind);
                String st2 = str.substring(ind+1,str.length());

                max_range = new BigInteger(st2);
                min_range = new BigInteger(st1);

                last = max_range.multiply((max_range.add(BigInteger.ONE)));
                last = last.divide(BigInteger.valueOf(2));

                first = min_range.multiply((min_range.subtract(BigInteger.ONE)));
                first = first.divide(BigInteger.valueOf(2));

                sum = last.subtract(first);
                c = max_range.subtract(min_range);
                c = c.add(BigInteger.ONE);
                sum = sum.divide(c);

                System.out.println(sum);
            }

            i++;
        }
    }
}
