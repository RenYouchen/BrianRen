package chiscoj.com;

import java.util.Scanner;

public class b006 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a , b;

        while (sc.hasNextLine()) {
            a = sc.nextInt();
            b = sc.nextInt();

            if (a % b == 0) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}
