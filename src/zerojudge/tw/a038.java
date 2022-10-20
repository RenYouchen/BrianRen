package zerojudge.tw;

import java.util.Scanner;

public class a038 {
    public static void main(String[] args) {
        String Num;
        Scanner sc = new Scanner(System.in);
        Num = sc.next();
        Boolean zero = false;
        String[] arr = Num.split("");
        for (int i = arr.length; i > 0; i--) {
            if (Integer.valueOf(arr[i-1])!=0 || zero == true) {
                zero = true;
                System.out.print(arr[i - 1]);
            }
        }
        if (zero == false) {
            System.out.println(0);
        }
    }
}
