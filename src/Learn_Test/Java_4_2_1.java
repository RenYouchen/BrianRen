package Learn_Test;

import java.util.Scanner;

public class Java_4_2_1 {
    public static void main(String[] args) {
        int money;
        Scanner sc = new Scanner(System.in);
        System.out.print("How much u need to pay");
        money = sc.nextInt();
        if (money > 2000) {
            money =money*7/10;
        }
        System.out.printf("You need to pay %d",money);
    }
}
