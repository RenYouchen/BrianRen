package chiscoj.com;

import java.util.Scanner;

public class b005 {
    public static void main(String[] args) {
        String a;
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextLine()) {
            a = sc.nextLine();
            System.out.printf("hello, %s\n", a);
        }
    }
}
