package chiscoj.com;

import java.util.Scanner;

public class b009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String hr,min,fNum;
        int num;
        while (sc.hasNextInt()) {
            hr = sc.next();
            min = sc.next();
            fNum = hr + min;
            num = Integer.parseInt(fNum);
            if (num >= 1700 || num < 730) {
                System.out.println("Off School");
            } else {
                System.out.println("At School");

            }
        }
    }
}
