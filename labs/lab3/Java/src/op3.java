import java.util.Scanner;
import java.text.DecimalFormat;

public class op3 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("0.00000");
        int a;
        System.out.println("Enter an integer number a = ");
        a = in.nextInt();
        double x;
        System.out.println("Enter fractional number x from 0 to 1, x = ");
        x = in.nextDouble();
        int k = 1;
        double sum = 1;
        boolean finish = false;
        while (!finish) {
            sum = sum + chislitel(a, k, x) / factorial(k);
            k++;
            if (chislitel(a, k, x) == 0) {
                finish = true;
            }
        }
        System.out.println(df.format(sum));
    }

    static int factorial(int k) {
        int n = 1;
        for (int i = 1; i <= k; i++) {
            n = n * i;
        }
        return n;
    }

    static double chislitel(int a, int k, double x) {
        double result = 1;
        for (int i = 0; i <= (k + 1); i++) {
            result = result * (a - i);
        }
        return result * Math.pow(x, k);
    }

}
