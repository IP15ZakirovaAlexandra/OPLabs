import java.util.Scanner;

import static java.lang.StrictMath.pow;
import static java.lang.StrictMath.abs;
import static java.lang.StrictMath.atan;

public class op6 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Create an integer: ");
        float x = in.nextFloat();
        System.out.print("Please, set the accuracy(0,***): ");
        float E = in.nextFloat();
        if (x > 0) {
            x = (float) atan(x);
            System.out.println(exp(x, E));
        } else {
            x = (float) pow(x, 2);
            System.out.println(exp(x, E) + 1);
        }
    }

    static float exp(float x, float E) {
        double xxx = 1;
        double factorial = 1;
        double result = 1;
        double res0 = 0;
        boolean finish = false;
        long i = 1;
        while (!finish) {
            result += xxx / factorial;
            xxx *= x;
            factorial *= i;
            if (abs(result - res0) < E) {
                finish = true;
            }
            res0 = result;
            i++;
        }
        return (float) result;

    }

}