

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        int n;

        while (sc.hasNext()) {

            n = sc.nextInt();

            if (n == 0) {
                break;
            }

            int cnt = 0;

            BigInteger a, b, c;

            a = BigInteger.valueOf(0);
            b = BigInteger.valueOf(1);
            c = BigInteger.valueOf(0);

            if (n == 1) {
                System.out.println("1");
            }

            else {

                for (int i = 1; i <= n;) {

                    c = a.add(b);
                    a = b;
                    b = c;

                    if(i == n) break;

                    cnt++;

                    if(cnt == 2)
                    {
                        cnt = 0;
                        i++;
                    }
                }

                System.out.println(c);
            }
        }
    }
}
