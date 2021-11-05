import java.util.Scanner;

import static java.lang.StrictMath.pow;

public class lababa {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter n: ");
        int n = in.nextInt();
        long mersen = 1;
        int p = 1;
        while (mersen < n) {
            boolean isPrime = true;
            for (int i = 2; i <= p / 2; i++) {
                if (p % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                mersen = (long) pow(2, p) - 1;
                if (mersen < n) {
                    System.out.println(mersen + " ");
                }
            }
            p++;
        }
    }
}