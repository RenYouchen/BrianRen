package chiscoj.com;

import java.util.Scanner;

public class b011 {
    public static void main(String[] args) {
        int num ;
        boolean find ;
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextInt()) {

            num = sc.nextInt();
            find = false;

            for (int i = 2; i <= Math.sqrt(num); i++) {
                if (num % i == 0) {
                    find = true;
                    break;
                }
            }
            if (find == true) {
                System.out.println("No");
            } else {
                System.out.println("Yes");
            }
        }
    }
}