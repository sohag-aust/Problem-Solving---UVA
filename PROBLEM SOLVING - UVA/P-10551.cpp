import java.math.BigInteger;
import java.util.Scanner;
import java.util.Stack;

public class Main
{
    public static void main(String args[])
    {
        BigInteger a,b,c,res,mod_result;
        BigInteger btemp,ctemp;

        Scanner sc = new Scanner(System.in);

        while(sc.hasNext())
        {
            a = sc.nextBigInteger();

            if(a.equals(BigInteger.valueOf(0))) break;

            b = sc.nextBigInteger();
            c = sc.nextBigInteger();

            if(a.equals(10))
            {
                res = b.mod(c);
                System.out.println(res);
            }

            else
            {
                btemp = b;
                ctemp = c;

                BigInteger m,mod,k,m1,m2,sumb,sumc,sum_mod;

                // CONVERTING B

                m = BigInteger.valueOf(10);
                m1= BigInteger.valueOf(1);
                k = BigInteger.valueOf(1);
                sumb = BigInteger.valueOf(0);
                sumc = BigInteger.valueOf(0);
                sum_mod = BigInteger.valueOf(0);

                int cnt = 0;

                do
                {
                    mod = btemp.mod(m);

                    if(cnt == 0)
                    {
                        m1 = k;
                        m2 = mod.multiply(m1);
                        sumb = sumb.add(m2);
                    }

                    else
                    {
                        m1 = a.multiply(m1);
                        m2 = mod.multiply(m1);
                        sumb = sumb.add(m2);
                    }

                    cnt++;

                    btemp = btemp.divide(m);
                }
                while (btemp.compareTo(BigInteger.ZERO) != 0);

                // CONVERTING C

                m = BigInteger.valueOf(10);
                m1= BigInteger.valueOf(1);
                k = BigInteger.valueOf(1);

                cnt = 0;

                do
                {
                    mod = ctemp.mod(m);

                    if(cnt == 0)
                    {
                        m1 = k;
                        m2 = mod.multiply(m1);
                        sumc = sumc.add(m2);
                    }

                    else
                    {
                        m1 = a.multiply(m1);
                        m2 = mod.multiply(m1);
                        sumc = sumc.add(m2);
                    }

                    cnt++;

                    ctemp = ctemp.divide(m);
                }
                while (ctemp.compareTo(BigInteger.ZERO) != 0);

                mod_result = sumb.mod(sumc);

                // CONVERTING MOD

                m = a;
                m1= BigInteger.valueOf(1);
                k = BigInteger.valueOf(1);

                cnt = 0;

                Stack<BigInteger> st = new Stack<BigInteger>();

                do
                {
                    mod = mod_result.mod(m);
                    st.push(mod);
                    mod_result = mod_result.divide(m);

                }
                while (mod_result.compareTo(BigInteger.ZERO) != 0);

                while(!st.empty())
                {
                    System.out.print(st.peek());
                    st.pop();
                }

                System.out.println("");
            }
        }
    }
}

