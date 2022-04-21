package chiscoj.com;

import java.util.Scanner;

public class b011_TLE {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n , c=0;
        while (sc.hasNextInt()) {
            n = sc.nextInt();
            c=0;
            for (int i = 1; i <= n; i++) {
                if (n%i==0){
                    c++;
                }
            }
            if (c==2){
                System.out.println("Yes");
            }else {
                System.out.println("No");
            }
        }
    }
}
