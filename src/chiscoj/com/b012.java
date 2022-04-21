package chiscoj.com;

import java.util.Scanner;

public class b012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num , digits;
        while (sc.hasNextInt()){
            digits = 1;
            num = sc.nextInt();
            while (num >= 10){
                num = num / 10;
                digits++;
            }
            System.out.println(digits);
        }
    }
}
