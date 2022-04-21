package Learn_Test;

import java.util.Scanner;
//What should u do if ur num is too large www
public class howManyChar {
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
