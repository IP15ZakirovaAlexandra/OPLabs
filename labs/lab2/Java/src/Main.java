import java.util.Scanner;

import static java.lang.StrictMath.pow;
import static java.lang.StrictMath.sqrt;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("You have vertices of the triangle at the coordinates you specified: A(a1;a2), B(b1,b2) and C(c1,c2)");
        System.out.println("Please,set coordinates to determine the type of triangle:");
        int a1;
        System.out.println("a1 = ");
        a1 = in.nextInt();
        int a2;
        System.out.println("a2 = ");
        a2 = in.nextInt();
        int b1;
        System.out.println("b1 = ");
        b1 = in.nextInt();
        int b2;
        System.out.println("b2 = ");
        b2 = in.nextInt();
        int c1;
        System.out.println("c1 = ");
        c1 = in.nextInt();
        int c2;
        System.out.println("c2 = ");
        c2 = in.nextInt();
        double AB = sqrt(pow(b1 - a1, 2) + pow(b2 - a2, 2));
        double BC = sqrt(pow(c1 - b1, 2) + pow(c2 - b2, 2));
        double CA = sqrt(pow(a1 - c1, 2) + pow(a2 - c2, 2));
        if (AB == BC && BC == CA) {
            System.out.println("The type of triangle is equilateral");
        } else if (AB == BC || BC == CA || CA == AB) {
            System.out.println("The type of triangle is isosceles");
        } else {
            System.out.println("The type of triangle is versatile");
        }


    }

}
