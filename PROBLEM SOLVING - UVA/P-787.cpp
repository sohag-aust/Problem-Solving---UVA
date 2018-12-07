
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        BigInteger[] ara = new BigInteger[110];
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
            BigInteger val, maxi, mul, prev_max;
            int i = 0;

            maxi = BigInteger.ONE;
            prev_max = BigInteger.ZERO;

            for (;; i++) {
                val = sc.nextBigInteger();
                if (val.compareTo(BigInteger.valueOf(-999999)) == 0) {
                    break;
                }
                ara[i] = val;
            }

            for (int j = 0; j < i; j++) {

                if (maxi.compareTo(prev_max) > 0) {
                    maxi = ara[j];
                }

                mul = BigInteger.ONE;

                for (int k = j; k < i; k++) {
                    mul = mul.multiply(ara[k]);

                    if (mul.compareTo(maxi) > 0) {
                        maxi = mul;
                        prev_max = mul;
                    }
                }
            }

            System.out.println(maxi);
        }
    }
}

