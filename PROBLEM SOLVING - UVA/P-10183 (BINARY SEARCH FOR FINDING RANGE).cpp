import java.math.BigInteger;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        BigInteger a = BigInteger.valueOf(1);
        BigInteger b = BigInteger.valueOf(2);
        BigInteger c = a.add(b);
        int cnt = 3;

        BigInteger[] series = new BigInteger[510];
        series[0] = BigInteger.valueOf(0);
        series[1] = BigInteger.valueOf(1);
        series[2] = BigInteger.valueOf(2);
        series[3] = c;

        while(++cnt < 500)
        {
            a = b;
            b = c;
            c = a.add(b);
            series[cnt] = c;
        }

        while(sc.hasNext())
        {
            BigInteger st,en;

            st = sc.nextBigInteger();
            en = sc.nextBigInteger();

            if(st.compareTo(BigInteger.ZERO) == 0 && en.compareTo(BigInteger.ZERO) == 0)
                break;

            int low = 0;
            int high = 500;
            int mid = (low + high) / 2;

            int result1, result2;

            while(low <= high)
            {
                result1 = series[mid].compareTo(st);
                result2 = series[mid].compareTo(en);

                if(result1 >= 0 && result2 <= 0)
                    break;

                else if(result2 > 0)
                    high = mid - 1;
                else if(result1 < 0)
                    low  = mid + 1;

                mid = (low + high) / 2;
            }

            while(mid > 0) /// finding min range cover starting values
            {
                result1 = series[mid-1].compareTo(st);

                if(result1 >= 0)
                    mid--;

                else
                    break;
            }

            result1 = series[mid].compareTo(st);

            if(result1 < 0)
            {
                while(mid <= 500) /// finding max range cover ending values
                {
                    result1 = series[mid].compareTo(st);

                    if(result1 >= 0)
                        break;

                    mid++;
                }
            }

            int ans = 0;

            while(mid <= 500)
            {
                if(series[mid].compareTo(BigInteger.ZERO) == 0)
                {
                    mid++;
                    continue;
                }

                result1 = series[mid].compareTo(en);

                if(result1 == 1)
                    break;

                mid++;
                ans++;
            }

            System.out.println(ans);
        }
    }
}
