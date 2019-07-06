import java.util.Scanner;
import java.math.BigDecimal;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		while(sc.hasNext())
		{
		    BigDecimal a = sc.nextBigDecimal();
		    int range = sc.nextInt();

		    BigDecimal power = new BigDecimal("1.0");

		    for(int i=1;i<=range;i++)
		    {
		        power = power.multiply(a);
		    }

		    String st = power.toString();

		    // removing E
		    String res = "";
		    int ind1 = st.indexOf('E');

		    if(ind1 > 0)
		    {
		        for(int i=ind1+2;i<st.length();i++)
    		    {
    		        res += st.charAt(i);
    		    }

		        String st1 = st.substring(0, st.length() - (st.length() - ind1));
		        st = st1;

    		    Integer val = Integer.valueOf(res);
    		    res = "";

    		    for(int i=1;i<val;i++)
    		    {
    		        res += "0";
    		    }

    		    int ind2 = st.indexOf('.');
    		    st1 = st.substring(0, ind2);

    		    st1 = res + st1;

    		    String st2 = st.substring(ind2+1, st.length());
    		    st2 = st1 + st2;

    		    st = "";
    		    st += ".";
    		    st += st2;
		    }


		    res = "";

		    // removing trailing zero start
		    StringBuilder sb = new StringBuilder(st);
		    sb.reverse();
		    st = sb.toString();

		    int ind = -1;

		    for(int i = 0; i < st.length() ; i++)
            {
                if(st.charAt(i) == '0')
                    ind = i;

                else break;
            }

            sb = new StringBuilder(st);
            sb.reverse();
            st = sb.toString();

            if(ind >= 0)
                 res = st.substring(0, st.length() - (ind+1));

		    System.out.println(res);
		}
	}
}

