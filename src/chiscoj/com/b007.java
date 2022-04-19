package chiscoj.com;

import java.util.Scanner;

public class b007 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sex = sc.nextInt();
        int age = sc.nextInt();
        if (sex==1&&age>=18){
            System.out.println("You are marriageable.");
        } else if (sex==2&&age>=16) {
            System.out.println("You are marriageable.");
        }else {
            System.out.println("You are NOT marriageable.");
        }

    }
}
