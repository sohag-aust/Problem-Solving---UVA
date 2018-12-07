
import java.math.BigInteger;

public class Main{

    public static void main(String[] args) {

        BigInteger range, sum;
        range = BigInteger.ONE;
        sum = BigInteger.ZERO;

        for (int i = 1; i <= 60; i++) {
            range = range.multiply(BigInteger.valueOf(10));
        }

        BigInteger[] value = new BigInteger[1000];
        BigInteger[] temp = new BigInteger[1000];

        value[0] = BigInteger.valueOf(1);
        value[1] = BigInteger.valueOf(1);

        System.out.println("1");
        System.out.println("1 1");

        int index = 2;
        int k = 1;

        while (true) {
            index++;
            k++;

            int flag = 0;
            int k1 = 1;

            temp[0] = BigInteger.ONE;

            for (int i = 0, j = i + 1; j < k; i++, j++) {
                sum = value[i].add(value[j]);

                if (sum.compareTo(range) >= 0) {
                    flag = 1;
                }

                temp[k1] = sum;
                k1++;
            }

            temp[k1] = BigInteger.ONE;

            for (int i = 0; i < index; i++) {
                value[i] = temp[i];
                if (i == index - 1) {
                    System.out.print(value[i]);
                } else {
                    System.out.print(value[i]+" ");
                }
            }

            System.out.println();

            if (flag == 1) {
                break;
            }
        }
    }
}

