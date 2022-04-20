package chiscoj.com;

import java.util.Arrays;
import java.util.Scanner;

public class b008 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [] arr = new int[3];
        while (sc.hasNextInt()) {
            for (int i = 0; i < 3; i++) {
                arr[i] = sc.nextInt();
            }
            Arrays.sort(arr);
            if (arr[0] + arr[1] > arr[2]) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}
