import java.util.Scanner;
import java.math.BigInteger;

public class op4 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter an integer number n > 0, n = ");
        int n = in.nextInt();
        System.out.println("Enter an integer number x , x = ");
        int x = in.nextInt();
        for (int k = 1; k <= n; k++) {
            System.out.print(chislitel(k, x));
            System.out.print("/");
            System.out.print(znamenatel(k));
            System.out.println("\n");
        }
    }

    public static BigInteger chislitel(int k, int x) {
        int i = 2;
        int m = x;
        while (i <= k) {
            m *= x;
            i++;
        }
        return new BigInteger(String.valueOf(m));
    }

    static BigInteger znamenatel(int n) {
        int factorial = 1;
        for (int i = 1; i <= (2 * n); i++) {
            factorial = factorial * i;
        }
        return new BigInteger(String.valueOf(factorial));
    }


}
