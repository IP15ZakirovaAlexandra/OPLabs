import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println( "you have a system of linear equations: ");
        System.out.println("a1*x + b1*y = c1;");
        System.out.println("a2*x + b2*y = c2;");
        double a1;
        System.out.println( "Write the first coefficient(a1): ");
        a1 = in.nextDouble();
        double b1;
        System.out.println( "Write the first coefficient(b1): ");
        b1 = in.nextDouble();
        double a2;
        System.out.println( "Write the first coefficient(a2): ");
        a2 = in.nextDouble();
        double b2;
        System.out.println( "Write the first coefficient(b2): ");
        b2 = in.nextDouble();
        double c1;
        System.out.println( "Write the first coefficient(c1): ");
        c1 = in.nextDouble();
        double c2;
        System.out.println( "Write the first coefficient(c2): ");
        c2 = in.nextDouble();
        double y = (c2-(c1*a2))/(b2*a1-b1*a2);
        double x = (c1-b1*y)/a1;
        System.out.println("x = " + x);
        System.out.println("y = " + y);

    }
}
