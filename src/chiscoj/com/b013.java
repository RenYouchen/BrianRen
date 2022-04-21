package chiscoj.com;

import java.util.Scanner;

public class b013 {
    public static void main(String[] args) {
        String largeNum ;
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextLine()){
            largeNum=sc.next();
            String[] arr = largeNum.split("");
            System.out.println(arr.length);
        }
    }
}
