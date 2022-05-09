package zerojudge.tw;

import java.util.Scanner;

public class a004 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int year = 0 ;
        while (sc.hasNextInt()) {
            year = sc.nextInt();
            //if ((year % 4 == 0 && (year & 100) != 0) || year % 400 == 0)
            //都是錯在奇怪地方...
           if ((year % 4 == 0 && (year % 100) != 0) || year % 400 == 0) {
                System.out.println("閏年\n");
            } else {
                System.out.println("平年\n");
            }
        }
    }
}
